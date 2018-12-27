module SimpleLineIcons = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "SimpleLineIcons";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "user"] `user
    | [@bs.as "people"] `people
    | [@bs.as "user-female"] `userFemale
    | [@bs.as "user-follow"] `userFollow
    | [@bs.as "user-following"] `userFollowing
    | [@bs.as "user-unfollow"] `userUnfollow
    | [@bs.as "login"] `login
    | [@bs.as "logout"] `logout
    | [@bs.as "emotsmile"] `emotsmile
    | [@bs.as "phone"] `phone
    | [@bs.as "call-end"] `callEnd
    | [@bs.as "call-in"] `callIn
    | [@bs.as "call-out"] `callOut
    | [@bs.as "map"] `map
    | [@bs.as "location-pin"] `locationPin
    | [@bs.as "direction"] `direction
    | [@bs.as "directions"] `directions
    | [@bs.as "compass"] `compass
    | [@bs.as "layers"] `layers
    | [@bs.as "menu"] `menu
    | [@bs.as "list"] `list
    | [@bs.as "options-vertical"] `optionsVertical
    | [@bs.as "options"] `options
    | [@bs.as "arrow-down"] `arrowDown
    | [@bs.as "arrow-left"] `arrowLeft
    | [@bs.as "arrow-right"] `arrowRight
    | [@bs.as "arrow-up"] `arrowUp
    | [@bs.as "arrow-up-circle"] `arrowUpCircle
    | [@bs.as "arrow-left-circle"] `arrowLeftCircle
    | [@bs.as "arrow-right-circle"] `arrowRightCircle
    | [@bs.as "arrow-down-circle"] `arrowDownCircle
    | [@bs.as "check"] `check
    | [@bs.as "clock"] `clock
    | [@bs.as "plus"] `plus
    | [@bs.as "minus"] `minus
    | [@bs.as "close"] `close
    | [@bs.as "event"] `event
    | [@bs.as "exclamation"] `exclamation
    | [@bs.as "organization"] `organization
    | [@bs.as "trophy"] `trophy
    | [@bs.as "screen-smartphone"] `screenSmartphone
    | [@bs.as "screen-desktop"] `screenDesktop
    | [@bs.as "plane"] `plane
    | [@bs.as "notebook"] `notebook
    | [@bs.as "mustache"] `mustache
    | [@bs.as "mouse"] `mouse
    | [@bs.as "magnet"] `magnet
    | [@bs.as "energy"] `energy
    | [@bs.as "disc"] `disc
    | [@bs.as "cursor"] `cursor
    | [@bs.as "cursor-move"] `cursorMove
    | [@bs.as "crop"] `crop
    | [@bs.as "chemistry"] `chemistry
    | [@bs.as "speedometer"] `speedometer
    | [@bs.as "shield"] `shield
    | [@bs.as "screen-tablet"] `screenTablet
    | [@bs.as "magic-wand"] `magicWand
    | [@bs.as "hourglass"] `hourglass
    | [@bs.as "graduation"] `graduation
    | [@bs.as "ghost"] `ghost
    | [@bs.as "game-controller"] `gameController
    | [@bs.as "fire"] `fire
    | [@bs.as "eyeglass"] `eyeglass
    | [@bs.as "envelope-open"] `envelopeOpen
    | [@bs.as "envelope-letter"] `envelopeLetter
    | [@bs.as "bell"] `bell
    | [@bs.as "badge"] `badge
    | [@bs.as "anchor"] `anchor
    | [@bs.as "wallet"] `wallet
    | [@bs.as "vector"] `vector
    | [@bs.as "speech"] `speech
    | [@bs.as "puzzle"] `puzzle
    | [@bs.as "printer"] `printer
    | [@bs.as "present"] `present
    | [@bs.as "playlist"] `playlist
    | [@bs.as "pin"] `pin
    | [@bs.as "picture"] `picture
    | [@bs.as "handbag"] `handbag
    | [@bs.as "globe-alt"] `globeAlt
    | [@bs.as "globe"] `globe
    | [@bs.as "folder-alt"] `folderAlt
    | [@bs.as "folder"] `folder
    | [@bs.as "film"] `film
    | [@bs.as "feed"] `feed
    | [@bs.as "drop"] `drop
    | [@bs.as "drawer"] `drawer
    | [@bs.as "docs"] `docs
    | [@bs.as "doc"] `doc
    | [@bs.as "diamond"] `diamond
    | [@bs.as "cup"] `cup
    | [@bs.as "calculator"] `calculator
    | [@bs.as "bubbles"] `bubbles
    | [@bs.as "briefcase"] `briefcase
    | [@bs.as "book-open"] `bookOpen
    | [@bs.as "basket-loaded"] `basketLoaded
    | [@bs.as "basket"] `basket
    | [@bs.as "bag"] `bag
    | [@bs.as "action-undo"] `actionUndo
    | [@bs.as "action-redo"] `actionRedo
    | [@bs.as "wrench"] `wrench
    | [@bs.as "umbrella"] `umbrella
    | [@bs.as "trash"] `trash
    | [@bs.as "tag"] `tag
    | [@bs.as "support"] `support
    | [@bs.as "frame"] `frame
    | [@bs.as "size-fullscreen"] `sizeFullscreen
    | [@bs.as "size-actual"] `sizeActual
    | [@bs.as "shuffle"] `shuffle
    | [@bs.as "share-alt"] `shareAlt
    | [@bs.as "share"] `share
    | [@bs.as "rocket"] `rocket
    | [@bs.as "question"] `question
    | [@bs.as "pie-chart"] `pieChart
    | [@bs.as "pencil"] `pencil
    | [@bs.as "note"] `note
    | [@bs.as "loop"] `loop
    | [@bs.as "home"] `home
    | [@bs.as "grid"] `grid
    | [@bs.as "graph"] `graph
    | [@bs.as "microphone"] `microphone
    | [@bs.as "music-tone-alt"] `musicToneAlt
    | [@bs.as "music-tone"] `musicTone
    | [@bs.as "earphones-alt"] `earphonesAlt
    | [@bs.as "earphones"] `earphones
    | [@bs.as "equalizer"] `equalizer
    | [@bs.as "like"] `like
    | [@bs.as "dislike"] `dislike
    | [@bs.as "control-start"] `controlStart
    | [@bs.as "control-rewind"] `controlRewind
    | [@bs.as "control-play"] `controlPlay
    | [@bs.as "control-pause"] `controlPause
    | [@bs.as "control-forward"] `controlForward
    | [@bs.as "control-end"] `controlEnd
    | [@bs.as "volume-1"] `volume1
    | [@bs.as "volume-2"] `volume2
    | [@bs.as "volume-off"] `volumeOff
    | [@bs.as "calendar"] `calendar
    | [@bs.as "bulb"] `bulb
    | [@bs.as "chart"] `chart
    | [@bs.as "ban"] `ban
    | [@bs.as "bubble"] `bubble
    | [@bs.as "camrecorder"] `camrecorder
    | [@bs.as "camera"] `camera
    | [@bs.as "cloud-download"] `cloudDownload
    | [@bs.as "cloud-upload"] `cloudUpload
    | [@bs.as "envelope"] `envelope
    | [@bs.as "eye"] `eye
    | [@bs.as "flag"] `flag
    | [@bs.as "heart"] `heart
    | [@bs.as "info"] `info
    | [@bs.as "key"] `key
    | [@bs.as "link"] `link
    | [@bs.as "lock"] `lock
    | [@bs.as "lock-open"] `lockOpen
    | [@bs.as "magnifier"] `magnifier
    | [@bs.as "magnifier-add"] `magnifierAdd
    | [@bs.as "magnifier-remove"] `magnifierRemove
    | [@bs.as "paper-clip"] `paperClip
    | [@bs.as "paper-plane"] `paperPlane
    | [@bs.as "power"] `power
    | [@bs.as "refresh"] `refresh
    | [@bs.as "reload"] `reload
    | [@bs.as "settings"] `settings
    | [@bs.as "star"] `star
    | [@bs.as "symbol-female"] `symbolFemale
    | [@bs.as "symbol-male"] `symbolMale
    | [@bs.as "target"] `target
    | [@bs.as "credit-card"] `creditCard
    | [@bs.as "paypal"] `paypal
    | [@bs.as "social-tumblr"] `socialTumblr
    | [@bs.as "social-twitter"] `socialTwitter
    | [@bs.as "social-facebook"] `socialFacebook
    | [@bs.as "social-instagram"] `socialInstagram
    | [@bs.as "social-linkedin"] `socialLinkedin
    | [@bs.as "social-pinterest"] `socialPinterest
    | [@bs.as "social-github"] `socialGithub
    | [@bs.as "social-google"] `socialGoogle
    | [@bs.as "social-reddit"] `socialReddit
    | [@bs.as "social-skype"] `socialSkype
    | [@bs.as "social-dribbble"] `socialDribbble
    | [@bs.as "social-behance"] `socialBehance
    | [@bs.as "social-foursqare"] `socialFoursqare
    | [@bs.as "social-soundcloud"] `socialSoundcloud
    | [@bs.as "social-spotify"] `socialSpotify
    | [@bs.as "social-stumbleupon"] `socialStumbleupon
    | [@bs.as "social-youtube"] `socialYoutube
    | [@bs.as "social-dropbox"] `socialDropbox
    | [@bs.as "social-vkontakte"] `socialVkontakte
    | [@bs.as "social-steam"] `socialSteam
  ]
  let nameToJs = nameToJs;

  [@bs.deriving abstract]
  type props = {
    [@bs.optional]
    allowFontScaling: bool,
    [@bs.optional]
    name: string,
    [@bs.optional]
    size: int,
    [@bs.optional]
    color: string,
    [@bs.optional]
    style: BsReactNative.Style.t,
  };

}

let make =
  (
    ~allowFontScaling=false,
    ~name=`user,
    ~color="black",
    ~size=12,
    ~style=BsReactNative.Style.style([]),
    children,
  ) =>
ReasonReact.wrapJsForReason(
  ~reactClass=SimpleLineIcons.js,
  ~props=
    SimpleLineIcons.props(
      ~allowFontScaling,
      ~name=SimpleLineIcons.nameToJs(name),
      ~size,
      ~color,
      ~style,
      (),
    ),
  children,
);