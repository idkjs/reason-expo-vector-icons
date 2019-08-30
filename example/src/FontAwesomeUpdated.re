module FontAwesome = {
  [@bs.module ("@expo/vector-icons", "FontAwesome")] [@react.component]
  external make:
    (~name: [@bs.string][ | [@bs.as "glass"] `glass
    | [@bs.as "music"] `music
    | [@bs.as "search"] `search
    | [@bs.as "envelope-o"] `envelopeO
    | [@bs.as "heart"] `heart
    | [@bs.as "star"] `star
    | [@bs.as "star-o"] `starO
    | [@bs.as "user"] `user
    | [@bs.as "film"] `film
    | [@bs.as "th-large"] `thLarge
    | [@bs.as "th"] `th
    | [@bs.as "th-list"] `thList
    | [@bs.as "check"] `check
    | [@bs.as "remove"] `remove
    | [@bs.as "close"] `close
    | [@bs.as "times"] `times
    | [@bs.as "search-plus"] `searchPlus
    | [@bs.as "search-minus"] `searchMinus
    | [@bs.as "power-off"] `powerOff
    | [@bs.as "signal"] `signal
    | [@bs.as "gear"] `gear
    | [@bs.as "cog"] `cog
    | [@bs.as "trash-o"] `trashO
    | [@bs.as "home"] `home
    | [@bs.as "file-o"] `fileO
    | [@bs.as "clock-o"] `clockO
    | [@bs.as "road"] `road
    | [@bs.as "download"] `download
    | [@bs.as "arrow-circle-o-down"] `arrowCircleODown
    | [@bs.as "arrow-circle-o-up"] `arrowCircleOUp
    | [@bs.as "inbox"] `inbox
    | [@bs.as "play-circle-o"] `playCircleO
    | [@bs.as "rotate-right"] `rotateRight
    | [@bs.as "repeat"] `repeat
    | [@bs.as "refresh"] `refresh
    | [@bs.as "list-alt"] `listAlt
    | [@bs.as "lock"] `lock
    | [@bs.as "flag"] `flag
    | [@bs.as "headphones"] `headphones
    | [@bs.as "volume-off"] `volumeOff
    | [@bs.as "volume-down"] `volumeDown
    | [@bs.as "volume-up"] `volumeUp
    | [@bs.as "qrcode"] `qrcode
    | [@bs.as "barcode"] `barcode
    | [@bs.as "tag"] `tag
    | [@bs.as "tags"] `tags
    | [@bs.as "book"] `book
    | [@bs.as "bookmark"] `bookmark
    | [@bs.as "print"] `print
    | [@bs.as "camera"] `camera
    | [@bs.as "font"] `font
    | [@bs.as "bold"] `bold
    | [@bs.as "italic"] `italic
    | [@bs.as "text-height"] `textHeight
    | [@bs.as "text-width"] `textWidth
    | [@bs.as "align-left"] `alignLeft
    | [@bs.as "align-center"] `alignCenter
    | [@bs.as "align-right"] `alignRight
    | [@bs.as "align-justify"] `alignJustify
    | [@bs.as "list"] `list
    | [@bs.as "dedent"] `dedent
    | [@bs.as "outdent"] `outdent
    | [@bs.as "indent"] `indent
    | [@bs.as "video-camera"] `videoCamera
    | [@bs.as "photo"] `photo
    | [@bs.as "image"] `image
    | [@bs.as "picture-o"] `pictureO
    | [@bs.as "pencil"] `pencil
    | [@bs.as "map-marker"] `mapMarker
    | [@bs.as "adjust"] `adjust
    | [@bs.as "tint"] `tint
    | [@bs.as "edit"] `edit
    | [@bs.as "pencil-square-o"] `pencilSquareO
    | [@bs.as "share-square-o"] `shareSquareO
    | [@bs.as "check-square-o"] `checkSquareO
    | [@bs.as "arrows"] `arrows
    | [@bs.as "step-backward"] `stepBackward
    | [@bs.as "fast-backward"] `fastBackward
    | [@bs.as "backward"] `backward
    | [@bs.as "play"] `play
    | [@bs.as "pause"] `pause
    | [@bs.as "stop"] `stop
    | [@bs.as "forward"] `forward
    | [@bs.as "fast-forward"] `fastForward
    | [@bs.as "step-forward"] `stepForward
    | [@bs.as "eject"] `eject
    | [@bs.as "chevron-left"] `chevronLeft
    | [@bs.as "chevron-right"] `chevronRight
    | [@bs.as "plus-circle"] `plusCircle
    | [@bs.as "minus-circle"] `minusCircle
    | [@bs.as "times-circle"] `timesCircle
    | [@bs.as "check-circle"] `checkCircle
    | [@bs.as "question-circle"] `questionCircle
    | [@bs.as "info-circle"] `infoCircle
    | [@bs.as "crosshairs"] `crosshairs
    | [@bs.as "times-circle-o"] `timesCircleO
    | [@bs.as "check-circle-o"] `checkCircleO
    | [@bs.as "ban"] `ban
    | [@bs.as "arrow-left"] `arrowLeft
    | [@bs.as "arrow-right"] `arrowRight
    | [@bs.as "arrow-up"] `arrowUp
    | [@bs.as "arrow-down"] `arrowDown
    | [@bs.as "mail-forward"] `mailForward
    | [@bs.as "share"] `share
    | [@bs.as "expand"] `expand
    | [@bs.as "compress"] `compress
    | [@bs.as "plus"] `plus
    | [@bs.as "minus"] `minus
    | [@bs.as "asterisk"] `asterisk
    | [@bs.as "exclamation-circle"] `exclamationCircle
    | [@bs.as "gift"] `gift
    | [@bs.as "leaf"] `leaf
    | [@bs.as "fire"] `fire
    | [@bs.as "eye"] `eye
    | [@bs.as "eye-slash"] `eyeSlash
    | [@bs.as "warning"] `warning
    | [@bs.as "exclamation-triangle"] `exclamationTriangle
    | [@bs.as "plane"] `plane
    | [@bs.as "calendar"] `calendar
    | [@bs.as "random"] `random
    | [@bs.as "comment"] `comment
    | [@bs.as "magnet"] `magnet
    | [@bs.as "chevron-up"] `chevronUp
    | [@bs.as "chevron-down"] `chevronDown
    | [@bs.as "retweet"] `retweet
    | [@bs.as "shopping-cart"] `shoppingCart
    | [@bs.as "folder"] `folder
    | [@bs.as "folder-open"] `folderOpen
    | [@bs.as "arrows-v"] `arrowsV
    | [@bs.as "arrows-h"] `arrowsH
    | [@bs.as "bar-chart-o"] `barChartO
    | [@bs.as "bar-chart"] `barChart
    | [@bs.as "twitter-square"] `twitterSquare
    | [@bs.as "facebook-square"] `facebookSquare
    | [@bs.as "camera-retro"] `cameraRetro
    | [@bs.as "key"] `key
    | [@bs.as "gears"] `gears
    | [@bs.as "cogs"] `cogs
    | [@bs.as "comments"] `comments
    | [@bs.as "thumbs-o-up"] `thumbsOUp
    | [@bs.as "thumbs-o-down"] `thumbsODown
    | [@bs.as "star-half"] `starHalf
    | [@bs.as "heart-o"] `heartO
    | [@bs.as "sign-out"] `signOut
    | [@bs.as "linkedin-square"] `linkedinSquare
    | [@bs.as "thumb-tack"] `thumbTack
    | [@bs.as "external-link"] `externalLink
    | [@bs.as "sign-in"] `signIn
    | [@bs.as "trophy"] `trophy
    | [@bs.as "github-square"] `githubSquare
    | [@bs.as "upload"] `upload
    | [@bs.as "lemon-o"] `lemonO
    | [@bs.as "phone"] `phone
    | [@bs.as "square-o"] `squareO
    | [@bs.as "bookmark-o"] `bookmarkO
    | [@bs.as "phone-square"] `phoneSquare
    | [@bs.as "twitter"] `twitter
    | [@bs.as "facebook-f"] `facebookF
    | [@bs.as "facebook"] `facebook
    | [@bs.as "github"] `github
    | [@bs.as "unlock"] `unlock
    | [@bs.as "credit-card"] `creditCard
    | [@bs.as "feed"] `feed
    | [@bs.as "rss"] `rss
    | [@bs.as "hdd-o"] `hddO
    | [@bs.as "bullhorn"] `bullhorn
    | [@bs.as "bell"] `bell
    | [@bs.as "certificate"] `certificate
    | [@bs.as "hand-o-right"] `handORight
    | [@bs.as "hand-o-left"] `handOLeft
    | [@bs.as "hand-o-up"] `handOUp
    | [@bs.as "hand-o-down"] `handODown
    | [@bs.as "arrow-circle-left"] `arrowCircleLeft
    | [@bs.as "arrow-circle-right"] `arrowCircleRight
    | [@bs.as "arrow-circle-up"] `arrowCircleUp
    | [@bs.as "arrow-circle-down"] `arrowCircleDown
    | [@bs.as "globe"] `globe
    | [@bs.as "wrench"] `wrench
    | [@bs.as "tasks"] `tasks
    | [@bs.as "filter"] `filter
    | [@bs.as "briefcase"] `briefcase
    | [@bs.as "arrows-alt"] `arrowsAlt
    | [@bs.as "group"] `group
    | [@bs.as "users"] `users
    | [@bs.as "chain"] `chain
    | [@bs.as "link"] `link
    | [@bs.as "cloud"] `cloud
    | [@bs.as "flask"] `flask
    | [@bs.as "cut"] `cut
    | [@bs.as "scissors"] `scissors
    | [@bs.as "copy"] `copy
    | [@bs.as "files-o"] `filesO
    | [@bs.as "paperclip"] `paperclip
    | [@bs.as "save"] `save
    | [@bs.as "floppy-o"] `floppyO
    | [@bs.as "square"] `square
    | [@bs.as "navicon"] `navicon
    | [@bs.as "reorder"] `reorder
    | [@bs.as "bars"] `bars
    | [@bs.as "list-ul"] `listUl
    | [@bs.as "list-ol"] `listOl
    | [@bs.as "strikethrough"] `strikethrough
    | [@bs.as "underline"] `underline
    | [@bs.as "table"] `table
    | [@bs.as "magic"] `magic
    | [@bs.as "truck"] `truck
    | [@bs.as "pinterest"] `pinterest
    | [@bs.as "pinterest-square"] `pinterestSquare
    | [@bs.as "google-plus-square"] `googlePlusSquare
    | [@bs.as "google-plus"] `googlePlus
    | [@bs.as "money"] `money
    | [@bs.as "caret-down"] `caretDown
    | [@bs.as "caret-up"] `caretUp
    | [@bs.as "caret-left"] `caretLeft
    | [@bs.as "caret-right"] `caretRight
    | [@bs.as "columns"] `columns
    | [@bs.as "unsorted"] `unsorted
    | [@bs.as "sort"] `sort
    | [@bs.as "sort-down"] `sortDown
    | [@bs.as "sort-desc"] `sortDesc
    | [@bs.as "sort-up"] `sortUp
    | [@bs.as "sort-asc"] `sortAsc
    | [@bs.as "envelope"] `envelope
    | [@bs.as "linkedin"] `linkedin
    | [@bs.as "rotate-left"] `rotateLeft
    | [@bs.as "undo"] `undo
    | [@bs.as "legal"] `legal
    | [@bs.as "gavel"] `gavel
    | [@bs.as "dashboard"] `dashboard
    | [@bs.as "tachometer"] `tachometer
    | [@bs.as "comment-o"] `commentO
    | [@bs.as "comments-o"] `commentsO
    | [@bs.as "flash"] `flash
    | [@bs.as "bolt"] `bolt
    | [@bs.as "sitemap"] `sitemap
    | [@bs.as "umbrella"] `umbrella
    | [@bs.as "paste"] `paste
    | [@bs.as "clipboard"] `clipboard
    | [@bs.as "lightbulb-o"] `lightbulbO
    | [@bs.as "exchange"] `exchange
    | [@bs.as "cloud-download"] `cloudDownload
    | [@bs.as "cloud-upload"] `cloudUpload
    | [@bs.as "user-md"] `userMd
    | [@bs.as "stethoscope"] `stethoscope
    | [@bs.as "suitcase"] `suitcase
    | [@bs.as "bell-o"] `bellO
    | [@bs.as "coffee"] `coffee
    | [@bs.as "cutlery"] `cutlery
    | [@bs.as "file-text-o"] `fileTextO
    | [@bs.as "building-o"] `buildingO
    | [@bs.as "hospital-o"] `hospitalO
    | [@bs.as "ambulance"] `ambulance
    | [@bs.as "medkit"] `medkit
    | [@bs.as "fighter-jet"] `fighterJet
    | [@bs.as "beer"] `beer
    | [@bs.as "h-square"] `hSquare
    | [@bs.as "plus-square"] `plusSquare
    | [@bs.as "angle-double-left"] `angleDoubleLeft
    | [@bs.as "angle-double-right"] `angleDoubleRight
    | [@bs.as "angle-double-up"] `angleDoubleUp
    | [@bs.as "angle-double-down"] `angleDoubleDown
    | [@bs.as "angle-left"] `angleLeft
    | [@bs.as "angle-right"] `angleRight
    | [@bs.as "angle-up"] `angleUp
    | [@bs.as "angle-down"] `angleDown
    | [@bs.as "desktop"] `desktop
    | [@bs.as "laptop"] `laptop
    | [@bs.as "tablet"] `tablet
    | [@bs.as "mobile-phone"] `mobilePhone
    | [@bs.as "mobile"] `mobile
    | [@bs.as "circle-o"] `circleO
    | [@bs.as "quote-left"] `quoteLeft
    | [@bs.as "quote-right"] `quoteRight
    | [@bs.as "spinner"] `spinner
    | [@bs.as "circle"] `circle
    | [@bs.as "mail-reply"] `mailReply
    | [@bs.as "reply"] `reply
    | [@bs.as "github-alt"] `githubAlt
    | [@bs.as "folder-o"] `folderO
    | [@bs.as "folder-open-o"] `folderOpenO
    | [@bs.as "smile-o"] `smileO
    | [@bs.as "frown-o"] `frownO
    | [@bs.as "meh-o"] `mehO
    | [@bs.as "gamepad"] `gamepad
    | [@bs.as "keyboard-o"] `keyboardO
    | [@bs.as "flag-o"] `flagO
    | [@bs.as "flag-checkered"] `flagCheckered
    | [@bs.as "terminal"] `terminal
    | [@bs.as "code"] `code
    | [@bs.as "mail-reply-all"] `mailReplyAll
    | [@bs.as "reply-all"] `replyAll
    | [@bs.as "star-half-empty"] `starHalfEmpty
    | [@bs.as "star-half-full"] `starHalfFull
    | [@bs.as "star-half-o"] `starHalfO
    | [@bs.as "location-arrow"] `locationArrow
    | [@bs.as "crop"] `crop
    | [@bs.as "code-fork"] `codeFork
    | [@bs.as "unlink"] `unlink
    | [@bs.as "chain-broken"] `chainBroken
    | [@bs.as "question"] `question
    | [@bs.as "info"] `info
    | [@bs.as "exclamation"] `exclamation
    | [@bs.as "superscript"] `superscript
    | [@bs.as "subscript"] `subscript
    | [@bs.as "eraser"] `eraser
    | [@bs.as "puzzle-piece"] `puzzlePiece
    | [@bs.as "microphone"] `microphone
    | [@bs.as "microphone-slash"] `microphoneSlash
    | [@bs.as "shield"] `shield
    | [@bs.as "calendar-o"] `calendarO
    | [@bs.as "fire-extinguisher"] `fireExtinguisher
    | [@bs.as "rocket"] `rocket
    | [@bs.as "maxcdn"] `maxcdn
    | [@bs.as "chevron-circle-left"] `chevronCircleLeft
    | [@bs.as "chevron-circle-right"] `chevronCircleRight
    | [@bs.as "chevron-circle-up"] `chevronCircleUp
    | [@bs.as "chevron-circle-down"] `chevronCircleDown
    | [@bs.as "html5"] `html5
    | [@bs.as "css3"] `css3
    | [@bs.as "anchor"] `anchor
    | [@bs.as "unlock-alt"] `unlockAlt
    | [@bs.as "bullseye"] `bullseye
    | [@bs.as "ellipsis-h"] `ellipsisH
    | [@bs.as "ellipsis-v"] `ellipsisV
    | [@bs.as "rss-square"] `rssSquare
    | [@bs.as "play-circle"] `playCircle
    | [@bs.as "ticket"] `ticket
    | [@bs.as "minus-square"] `minusSquare
    | [@bs.as "minus-square-o"] `minusSquareO
    | [@bs.as "level-up"] `levelUp
    | [@bs.as "level-down"] `levelDown
    | [@bs.as "check-square"] `checkSquare
    | [@bs.as "pencil-square"] `pencilSquare
    | [@bs.as "external-link-square"] `externalLinkSquare
    | [@bs.as "share-square"] `shareSquare
    | [@bs.as "compass"] `compass
    | [@bs.as "toggle-down"] `toggleDown
    | [@bs.as "caret-square-o-down"] `caretSquareODown
    | [@bs.as "toggle-up"] `toggleUp
    | [@bs.as "caret-square-o-up"] `caretSquareOUp
    | [@bs.as "toggle-right"] `toggleRight
    | [@bs.as "caret-square-o-right"] `caretSquareORight
    | [@bs.as "euro"] `euro
    | [@bs.as "eur"] `eur
    | [@bs.as "gbp"] `gbp
    | [@bs.as "dollar"] `dollar
    | [@bs.as "usd"] `usd
    | [@bs.as "rupee"] `rupee
    | [@bs.as "inr"] `inr
    | [@bs.as "cny"] `cny
    | [@bs.as "rmb"] `rmb
    | [@bs.as "yen"] `yen
    | [@bs.as "jpy"] `jpy
    | [@bs.as "ruble"] `ruble
    | [@bs.as "rouble"] `rouble
    | [@bs.as "rub"] `rub
    | [@bs.as "won"] `won
    | [@bs.as "krw"] `krw
    | [@bs.as "bitcoin"] `bitcoin
    | [@bs.as "btc"] `btc
    | [@bs.as "file"] `file
    | [@bs.as "file-text"] `fileText
    | [@bs.as "sort-alpha-asc"] `sortAlphaAsc
    | [@bs.as "sort-alpha-desc"] `sortAlphaDesc
    | [@bs.as "sort-amount-asc"] `sortAmountAsc
    | [@bs.as "sort-amount-desc"] `sortAmountDesc
    | [@bs.as "sort-numeric-asc"] `sortNumericAsc
    | [@bs.as "sort-numeric-desc"] `sortNumericDesc
    | [@bs.as "thumbs-up"] `thumbsUp
    | [@bs.as "thumbs-down"] `thumbsDown
    | [@bs.as "youtube-square"] `youtubeSquare
    | [@bs.as "youtube"] `youtube
    | [@bs.as "xing"] `xing
    | [@bs.as "xing-square"] `xingSquare
    | [@bs.as "youtube-play"] `youtubePlay
    | [@bs.as "dropbox"] `dropbox
    | [@bs.as "stack-overflow"] `stackOverflow
    | [@bs.as "instagram"] `instagram
    | [@bs.as "flickr"] `flickr
    | [@bs.as "adn"] `adn
    | [@bs.as "bitbucket"] `bitbucket
    | [@bs.as "bitbucket-square"] `bitbucketSquare
    | [@bs.as "tumblr"] `tumblr
    | [@bs.as "tumblr-square"] `tumblrSquare
    | [@bs.as "long-arrow-down"] `longArrowDown
    | [@bs.as "long-arrow-up"] `longArrowUp
    | [@bs.as "long-arrow-left"] `longArrowLeft
    | [@bs.as "long-arrow-right"] `longArrowRight
    | [@bs.as "apple"] `apple
    | [@bs.as "windows"] `windows
    | [@bs.as "android"] `android
    | [@bs.as "linux"] `linux
    | [@bs.as "dribbble"] `dribbble
    | [@bs.as "skype"] `skype
    | [@bs.as "foursquare"] `foursquare
    | [@bs.as "trello"] `trello
    | [@bs.as "female"] `female
    | [@bs.as "male"] `male
    | [@bs.as "gittip"] `gittip
    | [@bs.as "gratipay"] `gratipay
    | [@bs.as "sun-o"] `sunO
    | [@bs.as "moon-o"] `moonO
    | [@bs.as "archive"] `archive
    | [@bs.as "bug"] `bug
    | [@bs.as "vk"] `vk
    | [@bs.as "weibo"] `weibo
    | [@bs.as "renren"] `renren
    | [@bs.as "pagelines"] `pagelines
    | [@bs.as "stack-exchange"] `stackExchange
    | [@bs.as "arrow-circle-o-right"] `arrowCircleORight
    | [@bs.as "arrow-circle-o-left"] `arrowCircleOLeft
    | [@bs.as "toggle-left"] `toggleLeft
    | [@bs.as "caret-square-o-left"] `caretSquareOLeft
    | [@bs.as "dot-circle-o"] `dotCircleO
    | [@bs.as "wheelchair"] `wheelchair
    | [@bs.as "vimeo-square"] `vimeoSquare
    | [@bs.as "turkish-lira"] `turkishLira
    | [@bs.as "try"] `try_
    | [@bs.as "plus-square-o"] `plusSquareO
    | [@bs.as "space-shuttle"] `spaceShuttle
    | [@bs.as "slack"] `slack
    | [@bs.as "envelope-square"] `envelopeSquare
    | [@bs.as "wordpress"] `wordpress
    | [@bs.as "openid"] `openid
    | [@bs.as "institution"] `institution
    | [@bs.as "bank"] `bank
    | [@bs.as "university"] `university
    | [@bs.as "mortar-board"] `mortarBoard
    | [@bs.as "graduation-cap"] `graduationCap
    | [@bs.as "yahoo"] `yahoo
    | [@bs.as "google"] `google
    | [@bs.as "reddit"] `reddit
    | [@bs.as "reddit-square"] `redditSquare
    | [@bs.as "stumbleupon-circle"] `stumbleuponCircle
    | [@bs.as "stumbleupon"] `stumbleupon
    | [@bs.as "delicious"] `delicious
    | [@bs.as "digg"] `digg
    | [@bs.as "pied-piper-pp"] `piedPiperPp
    | [@bs.as "pied-piper-alt"] `piedPiperAlt
    | [@bs.as "drupal"] `drupal
    | [@bs.as "joomla"] `joomla
    | [@bs.as "language"] `language
    | [@bs.as "fax"] `fax
    | [@bs.as "building"] `building
    | [@bs.as "child"] `child
    | [@bs.as "paw"] `paw
    | [@bs.as "spoon"] `spoon
    | [@bs.as "cube"] `cube
    | [@bs.as "cubes"] `cubes
    | [@bs.as "behance"] `behance
    | [@bs.as "behance-square"] `behanceSquare
    | [@bs.as "steam"] `steam
    | [@bs.as "steam-square"] `steamSquare
    | [@bs.as "recycle"] `recycle
    | [@bs.as "automobile"] `automobile
    | [@bs.as "car"] `car
    | [@bs.as "cab"] `cab
    | [@bs.as "taxi"] `taxi
    | [@bs.as "tree"] `tree
    | [@bs.as "spotify"] `spotify
    | [@bs.as "deviantart"] `deviantart
    | [@bs.as "soundcloud"] `soundcloud
    | [@bs.as "database"] `database
    | [@bs.as "file-pdf-o"] `filePdfO
    | [@bs.as "file-word-o"] `fileWordO
    | [@bs.as "file-excel-o"] `fileExcelO
    | [@bs.as "file-powerpoint-o"] `filePowerpointO
    | [@bs.as "file-photo-o"] `filePhotoO
    | [@bs.as "file-picture-o"] `filePictureO
    | [@bs.as "file-image-o"] `fileImageO
    | [@bs.as "file-zip-o"] `fileZipO
    | [@bs.as "file-archive-o"] `fileArchiveO
    | [@bs.as "file-sound-o"] `fileSoundO
    | [@bs.as "file-audio-o"] `fileAudioO
    | [@bs.as "file-movie-o"] `fileMovieO
    | [@bs.as "file-video-o"] `fileVideoO
    | [@bs.as "file-code-o"] `fileCodeO
    | [@bs.as "vine"] `vine
    | [@bs.as "codepen"] `codepen
    | [@bs.as "jsfiddle"] `jsfiddle
    | [@bs.as "life-bouy"] `lifeBouy
    | [@bs.as "life-buoy"] `lifeBuoy
    | [@bs.as "life-saver"] `lifeSaver
    | [@bs.as "support"] `support
    | [@bs.as "life-ring"] `lifeRing
    | [@bs.as "circle-o-notch"] `circleONotch
    | [@bs.as "ra"] `ra
    | [@bs.as "resistance"] `resistance
    | [@bs.as "rebel"] `rebel
    | [@bs.as "ge"] `ge
    | [@bs.as "empire"] `empire
    | [@bs.as "git-square"] `gitSquare
    | [@bs.as "git"] `git
    | [@bs.as "y-combinator-square"] `yCombinatorSquare
    | [@bs.as "yc-square"] `ycSquare
    | [@bs.as "hacker-news"] `hackerNews
    | [@bs.as "tencent-weibo"] `tencentWeibo
    | [@bs.as "qq"] `qq
    | [@bs.as "wechat"] `wechat
    | [@bs.as "weixin"] `weixin
    | [@bs.as "send"] `send
    | [@bs.as "paper-plane"] `paperPlane
    | [@bs.as "send-o"] `sendO
    | [@bs.as "paper-plane-o"] `paperPlaneO
    | [@bs.as "history"] `history
    | [@bs.as "circle-thin"] `circleThin
    | [@bs.as "header"] `header
    | [@bs.as "paragraph"] `paragraph
    | [@bs.as "sliders"] `sliders
    | [@bs.as "share-alt"] `shareAlt
    | [@bs.as "share-alt-square"] `shareAltSquare
    | [@bs.as "bomb"] `bomb
    | [@bs.as "soccer-ball-o"] `soccerBallO
    | [@bs.as "futbol-o"] `futbolO
    | [@bs.as "tty"] `tty
    | [@bs.as "binoculars"] `binoculars
    | [@bs.as "plug"] `plug
    | [@bs.as "slideshare"] `slideshare
    | [@bs.as "twitch"] `twitch
    | [@bs.as "yelp"] `yelp
    | [@bs.as "newspaper-o"] `newspaperO
    | [@bs.as "wifi"] `wifi
    | [@bs.as "calculator"] `calculator
    | [@bs.as "paypal"] `paypal
    | [@bs.as "google-wallet"] `googleWallet
    | [@bs.as "cc-visa"] `ccVisa
    | [@bs.as "cc-mastercard"] `ccMastercard
    | [@bs.as "cc-discover"] `ccDiscover
    | [@bs.as "cc-amex"] `ccAmex
    | [@bs.as "cc-paypal"] `ccPaypal
    | [@bs.as "cc-stripe"] `ccStripe
    | [@bs.as "bell-slash"] `bellSlash
    | [@bs.as "bell-slash-o"] `bellSlashO
    | [@bs.as "trash"] `trash
    | [@bs.as "copyright"] `copyright
    | [@bs.as "at"] `at
    | [@bs.as "eyedropper"] `eyedropper
    | [@bs.as "paint-brush"] `paintBrush
    | [@bs.as "birthday-cake"] `birthdayCake
    | [@bs.as "area-chart"] `areaChart
    | [@bs.as "pie-chart"] `pieChart
    | [@bs.as "line-chart"] `lineChart
    | [@bs.as "lastfm"] `lastfm
    | [@bs.as "lastfm-square"] `lastfmSquare
    | [@bs.as "toggle-off"] `toggleOff
    | [@bs.as "toggle-on"] `toggleOn
    | [@bs.as "bicycle"] `bicycle
    | [@bs.as "bus"] `bus
    | [@bs.as "ioxhost"] `ioxhost
    | [@bs.as "angellist"] `angellist
    | [@bs.as "cc"] `cc
    | [@bs.as "shekel"] `shekel
    | [@bs.as "sheqel"] `sheqel
    | [@bs.as "ils"] `ils
    | [@bs.as "meanpath"] `meanpath
    | [@bs.as "buysellads"] `buysellads
    | [@bs.as "connectdevelop"] `connectdevelop
    | [@bs.as "dashcube"] `dashcube
    | [@bs.as "forumbee"] `forumbee
    | [@bs.as "leanpub"] `leanpub
    | [@bs.as "sellsy"] `sellsy
    | [@bs.as "shirtsinbulk"] `shirtsinbulk
    | [@bs.as "simplybuilt"] `simplybuilt
    | [@bs.as "skyatlas"] `skyatlas
    | [@bs.as "cart-plus"] `cartPlus
    | [@bs.as "cart-arrow-down"] `cartArrowDown
    | [@bs.as "diamond"] `diamond
    | [@bs.as "ship"] `ship
    | [@bs.as "user-secret"] `userSecret
    | [@bs.as "motorcycle"] `motorcycle
    | [@bs.as "street-view"] `streetView
    | [@bs.as "heartbeat"] `heartbeat
    | [@bs.as "venus"] `venus
    | [@bs.as "mars"] `mars
    | [@bs.as "mercury"] `mercury
    | [@bs.as "intersex"] `intersex
    | [@bs.as "transgender"] `transgender
    | [@bs.as "transgender-alt"] `transgenderAlt
    | [@bs.as "venus-double"] `venusDouble
    | [@bs.as "mars-double"] `marsDouble
    | [@bs.as "venus-mars"] `venusMars
    | [@bs.as "mars-stroke"] `marsStroke
    | [@bs.as "mars-stroke-v"] `marsStrokeV
    | [@bs.as "mars-stroke-h"] `marsStrokeH
    | [@bs.as "neuter"] `neuter
    | [@bs.as "genderless"] `genderless
    | [@bs.as "facebook-official"] `facebookOfficial
    | [@bs.as "pinterest-p"] `pinterestP
    | [@bs.as "whatsapp"] `whatsapp
    | [@bs.as "server"] `server
    | [@bs.as "user-plus"] `userPlus
    | [@bs.as "user-times"] `userTimes
    | [@bs.as "hotel"] `hotel
    | [@bs.as "bed"] `bed
    | [@bs.as "viacoin"] `viacoin
    | [@bs.as "train"] `train
    | [@bs.as "subway"] `subway
    | [@bs.as "medium"] `medium
    | [@bs.as "yc"] `yc
    | [@bs.as "y-combinator"] `yCombinator
    | [@bs.as "optin-monster"] `optinMonster
    | [@bs.as "opencart"] `opencart
    | [@bs.as "expeditedssl"] `expeditedssl
    | [@bs.as "battery-4"] `battery4
    | [@bs.as "battery"] `battery
    | [@bs.as "battery-full"] `batteryFull
    | [@bs.as "battery-3"] `battery3
    | [@bs.as "battery-three-quarters"] `batteryThreeQuarters
    | [@bs.as "battery-2"] `battery2
    | [@bs.as "battery-half"] `batteryHalf
    | [@bs.as "battery-1"] `battery1
    | [@bs.as "battery-quarter"] `batteryQuarter
    | [@bs.as "battery-0"] `battery0
    | [@bs.as "battery-empty"] `batteryEmpty
    | [@bs.as "mouse-pointer"] `mousePointer
    | [@bs.as "i-cursor"] `iCursor
    | [@bs.as "object-group"] `objectGroup
    | [@bs.as "object-ungroup"] `objectUngroup
    | [@bs.as "sticky-note"] `stickyNote
    | [@bs.as "sticky-note-o"] `stickyNoteO
    | [@bs.as "cc-jcb"] `ccJcb
    | [@bs.as "cc-diners-club"] `ccDinersClub
    | [@bs.as "clone"] `clone
    | [@bs.as "balance-scale"] `balanceScale
    | [@bs.as "hourglass-o"] `hourglassO
    | [@bs.as "hourglass-1"] `hourglass1
    | [@bs.as "hourglass-start"] `hourglassStart
    | [@bs.as "hourglass-2"] `hourglass2
    | [@bs.as "hourglass-half"] `hourglassHalf
    | [@bs.as "hourglass-3"] `hourglass3
    | [@bs.as "hourglass-end"] `hourglassEnd
    | [@bs.as "hourglass"] `hourglass
    | [@bs.as "hand-grab-o"] `handGrabO
    | [@bs.as "hand-rock-o"] `handRockO
    | [@bs.as "hand-stop-o"] `handStopO
    | [@bs.as "hand-paper-o"] `handPaperO
    | [@bs.as "hand-scissors-o"] `handScissorsO
    | [@bs.as "hand-lizard-o"] `handLizardO
    | [@bs.as "hand-spock-o"] `handSpockO
    | [@bs.as "hand-pointer-o"] `handPointerO
    | [@bs.as "hand-peace-o"] `handPeaceO
    | [@bs.as "trademark"] `trademark
    | [@bs.as "registered"] `registered
    | [@bs.as "creative-commons"] `creativeCommons
    | [@bs.as "gg"] `gg
    | [@bs.as "gg-circle"] `ggCircle
    | [@bs.as "tripadvisor"] `tripadvisor
    | [@bs.as "odnoklassniki"] `odnoklassniki
    | [@bs.as "odnoklassniki-square"] `odnoklassnikiSquare
    | [@bs.as "get-pocket"] `getPocket
    | [@bs.as "wikipedia-w"] `wikipediaW
    | [@bs.as "safari"] `safari
    | [@bs.as "chrome"] `chrome
    | [@bs.as "firefox"] `firefox
    | [@bs.as "opera"] `opera
    | [@bs.as "internet-explorer"] `internetExplorer
    | [@bs.as "tv"] `tv
    | [@bs.as "television"] `television
    | [@bs.as "contao"] `contao
    | [@bs.as "500px"] `_500Px
    | [@bs.as "amazon"] `amazon
    | [@bs.as "calendar-plus-o"] `calendarPlusO
    | [@bs.as "calendar-minus-o"] `calendarMinusO
    | [@bs.as "calendar-times-o"] `calendarTimesO
    | [@bs.as "calendar-check-o"] `calendarCheckO
    | [@bs.as "industry"] `industry
    | [@bs.as "map-pin"] `mapPin
    | [@bs.as "map-signs"] `mapSigns
    | [@bs.as "map-o"] `mapO
    | [@bs.as "map"] `map
    | [@bs.as "commenting"] `commenting
    | [@bs.as "commenting-o"] `commentingO
    | [@bs.as "houzz"] `houzz
    | [@bs.as "vimeo"] `vimeo
    | [@bs.as "black-tie"] `blackTie
    | [@bs.as "fonticons"] `fonticons
    | [@bs.as "reddit-alien"] `redditAlien
    | [@bs.as "edge"] `edge
    | [@bs.as "credit-card-alt"] `creditCardAlt
    | [@bs.as "codiepie"] `codiepie
    | [@bs.as "modx"] `modx
    | [@bs.as "fort-awesome"] `fortAwesome
    | [@bs.as "usb"] `usb
    | [@bs.as "product-hunt"] `productHunt
    | [@bs.as "mixcloud"] `mixcloud
    | [@bs.as "scribd"] `scribd
    | [@bs.as "pause-circle"] `pauseCircle
    | [@bs.as "pause-circle-o"] `pauseCircleO
    | [@bs.as "stop-circle"] `stopCircle
    | [@bs.as "stop-circle-o"] `stopCircleO
    | [@bs.as "shopping-bag"] `shoppingBag
    | [@bs.as "shopping-basket"] `shoppingBasket
    | [@bs.as "hashtag"] `hashtag
    | [@bs.as "bluetooth"] `bluetooth
    | [@bs.as "bluetooth-b"] `bluetoothB
    | [@bs.as "percent"] `percent
    | [@bs.as "gitlab"] `gitlab
    | [@bs.as "wpbeginner"] `wpbeginner
    | [@bs.as "wpforms"] `wpforms
    | [@bs.as "envira"] `envira
    | [@bs.as "universal-access"] `universalAccess
    | [@bs.as "wheelchair-alt"] `wheelchairAlt
    | [@bs.as "question-circle-o"] `questionCircleO
    | [@bs.as "blind"] `blind
    | [@bs.as "audio-description"] `audioDescription
    | [@bs.as "volume-control-phone"] `volumeControlPhone
    | [@bs.as "braille"] `braille
    | [@bs.as "assistive-listening-systems"] `assistiveListeningSystems
    | [@bs.as "asl-interpreting"] `aslInterpreting
    | [@bs.as "american-sign-language-interpreting"] `americanSignLanguageInterpreting
    | [@bs.as "deafness"] `deafness
    | [@bs.as "hard-of-hearing"] `hardOfHearing
    | [@bs.as "deaf"] `deaf
    | [@bs.as "glide"] `glide
    | [@bs.as "glide-g"] `glideG
    | [@bs.as "signing"] `signing
    | [@bs.as "sign-language"] `signLanguage
    | [@bs.as "low-vision"] `lowVision
    | [@bs.as "viadeo"] `viadeo
    | [@bs.as "viadeo-square"] `viadeoSquare
    | [@bs.as "snapchat"] `snapchat
    | [@bs.as "snapchat-ghost"] `snapchatGhost
    | [@bs.as "snapchat-square"] `snapchatSquare
    | [@bs.as "pied-piper"] `piedPiper
    | [@bs.as "first-order"] `firstOrder
    | [@bs.as "yoast"] `yoast
    | [@bs.as "themeisle"] `themeisle
    | [@bs.as "google-plus-circle"] `googlePlusCircle
    | [@bs.as "google-plus-official"] `googlePlusOfficial
    | [@bs.as "fa"] `fa
    | [@bs.as "font-awesome"] `fontAwesome
    | [@bs.as "handshake-o"] `handshakeO
    | [@bs.as "envelope-open"] `envelopeOpen
    | [@bs.as "envelope-open-o"] `envelopeOpenO
    | [@bs.as "linode"] `linode
    | [@bs.as "address-book"] `addressBook
    | [@bs.as "address-book-o"] `addressBookO
    | [@bs.as "vcard"] `vcard
    | [@bs.as "address-card"] `addressCard
    | [@bs.as "vcard-o"] `vcardO
    | [@bs.as "address-card-o"] `addressCardO
    | [@bs.as "user-circle"] `userCircle
    | [@bs.as "user-circle-o"] `userCircleO
    | [@bs.as "user-o"] `userO
    | [@bs.as "id-badge"] `idBadge
    | [@bs.as "drivers-license"] `driversLicense
    | [@bs.as "id-card"] `idCard
    | [@bs.as "drivers-license-o"] `driversLicenseO
    | [@bs.as "id-card-o"] `idCardO
    | [@bs.as "quora"] `quora
    | [@bs.as "free-code-camp"] `freeCodeCamp
    | [@bs.as "telegram"] `telegram
    | [@bs.as "thermometer-4"] `thermometer4
    | [@bs.as "thermometer"] `thermometer
    | [@bs.as "thermometer-full"] `thermometerFull
    | [@bs.as "thermometer-3"] `thermometer3
    | [@bs.as "thermometer-three-quarters"] `thermometerThreeQuarters
    | [@bs.as "thermometer-2"] `thermometer2
    | [@bs.as "thermometer-half"] `thermometerHalf
    | [@bs.as "thermometer-1"] `thermometer1
    | [@bs.as "thermometer-quarter"] `thermometerQuarter
    | [@bs.as "thermometer-0"] `thermometer0
    | [@bs.as "thermometer-empty"] `thermometerEmpty
    | [@bs.as "shower"] `shower
    | [@bs.as "bathtub"] `bathtub
    | [@bs.as "s15"] `s15
    | [@bs.as "bath"] `bath
    | [@bs.as "podcast"] `podcast
    | [@bs.as "window-maximize"] `windowMaximize
    | [@bs.as "window-minimize"] `windowMinimize
    | [@bs.as "window-restore"] `windowRestore
    | [@bs.as "times-rectangle"] `timesRectangle
    | [@bs.as "window-close"] `windowClose
    | [@bs.as "times-rectangle-o"] `timesRectangleO
    | [@bs.as "window-close-o"] `windowCloseO
    | [@bs.as "bandcamp"] `bandcamp
    | [@bs.as "grav"] `grav
    | [@bs.as "etsy"] `etsy
    | [@bs.as "imdb"] `imdb
    | [@bs.as "ravelry"] `ravelry
    | [@bs.as "eercast"] `eercast
    | [@bs.as "microchip"] `microchip
    | [@bs.as "snowflake-o"] `snowflakeO
    | [@bs.as "superpowers"] `superpowers
    | [@bs.as "wpexplorer"] `wpexplorer
    | [@bs.as "meetup"] `meetup  ],
     ~size: int,
    ~color: string,
     ~style: ReactNative.Style.t=?) =>
    React.element = "FontAwesome";
};