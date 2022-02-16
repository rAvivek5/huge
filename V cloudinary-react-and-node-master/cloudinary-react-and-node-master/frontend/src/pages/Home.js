import React, { useEffect, useState } from 'react'
import { Image } from 'cloudinary-react'
import './Home.css'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import {
  faCoffee,
  faComment,
  faHeart,
  faShare,
} from '@fortawesome/free-solid-svg-icons'

export default function Home() {
  const [imageIds, setImageIds] = useState()

  const loadImages = async () => {
    try {
      const res = await fetch('/api/images')
      const data = await res.json()
      console.log(data)
      setImageIds(data)
    } catch (error) {
      console.error(error)
    }
  }
  useEffect(() => {
    loadImages()
  }, [])
  return (
    <div className='home'>
      <div className='gallery'>
        <a>
          {imageIds &&
            imageIds.map((imageId, index) => (
              <Image className='image123'
                key={index}
                // cloudName={process.env.REACT_APP_CLOUDINARY_NAME}
                cloudName='dajgfei2b'
                publicId={imageId}
                width='1000'
                crop='scale'
              />
            ))}
        </a>
      </div>
      {/* <div>
        {imageIds &&
            imageIds.map((imageId, index) => (
              <Image
                key={index}
                // cloudName={process.env.REACT_APP_CLOUDINARY_NAME}
                cloudName='dajgfei2b'
                publicId={imageId}
                width='600'
                crop='scale'
              />
            ))}
      </div> */}
      <div className='icons'>
        {/* <FontAwesomeIcon className='indicons' icon={faHeart} />
        <FontAwesomeIcon className='indicons' icon={faComment} />
        <FontAwesomeIcon className='indicons' icon={faShare} /> */}
      </div>

      
    </div>
  )
}
