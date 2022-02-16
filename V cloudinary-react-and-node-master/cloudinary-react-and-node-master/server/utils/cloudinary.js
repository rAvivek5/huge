require('dotenv').config()

const cloudinary = require('cloudinary').v2
cloudinary.config({
  cloud_name: 'dajgfei2b',
  api_key: '969356655781839',
  api_secret: 'flBml4a6a0lSRcWF4ilyeDOaiKM',
})

// cloudinary.uploader.upload(
//   'https://www.realmadrid.com/StaticFiles/RealMadridResponsive/images/header_logo.svg',
//   function (error, result) {
//     console.log(result)
//   }
// )

module.exports = { cloudinary }
