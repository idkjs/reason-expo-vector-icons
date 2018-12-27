module AntDesign = {
  [@bs.module "@expo/vector-icons"]
  external js : ReasonReact.reactClass = "AntDesign";

  [@bs.deriving jsConverter]
  type name = [
    | [@bs.as "stepforward"] `stepforward
    | [@bs.as "stepbackward"] `stepbackward
    | [@bs.as "forward"] `forward
    | [@bs.as "banckward"] `banckward
    | [@bs.as "caretright"] `caretright
    | [@bs.as "caretleft"] `caretleft
    | [@bs.as "caretdown"] `caretdown
    | [@bs.as "caretup"] `caretup
    | [@bs.as "rightcircle"] `rightcircle
    | [@bs.as "leftcircle"] `leftcircle
    | [@bs.as "upcircle"] `upcircle
    | [@bs.as "downcircle"] `downcircle
    | [@bs.as "rightcircleo"] `rightcircleo
    | [@bs.as "leftcircleo"] `leftcircleo
    | [@bs.as "upcircleo"] `upcircleo
    | [@bs.as "downcircleo"] `downcircleo
    | [@bs.as "verticleleft"] `verticleleft
    | [@bs.as "verticleright"] `verticleright
    | [@bs.as "back"] `back
    | [@bs.as "retweet"] `retweet
    | [@bs.as "shrink"] `shrink
    | [@bs.as "arrowsalt"] `arrowsalt
    | [@bs.as "doubleright"] `doubleright
    | [@bs.as "doubleleft"] `doubleleft
    | [@bs.as "arrowdown"] `arrowdown
    | [@bs.as "arrowup"] `arrowup
    | [@bs.as "arrowright"] `arrowright
    | [@bs.as "arrowleft"] `arrowleft
    | [@bs.as "down"] `down
    | [@bs.as "up"] `up
    | [@bs.as "right"] `right
    | [@bs.as "left"] `left
    | [@bs.as "minussquareo"] `minussquareo
    | [@bs.as "minuscircle"] `minuscircle
    | [@bs.as "minuscircleo"] `minuscircleo
    | [@bs.as "minus"] `minus
    | [@bs.as "pluscircleo"] `pluscircleo
    | [@bs.as "pluscircle"] `pluscircle
    | [@bs.as "plus"] `plus
    | [@bs.as "infocirlce"] `infocirlce
    | [@bs.as "infocirlceo"] `infocirlceo
    | [@bs.as "info"] `info
    | [@bs.as "exclamation"] `exclamation
    | [@bs.as "exclamationcircle"] `exclamationcircle
    | [@bs.as "exclamationcircleo"] `exclamationcircleo
    | [@bs.as "closecircle"] `closecircle
    | [@bs.as "closecircleo"] `closecircleo
    | [@bs.as "checkcircle"] `checkcircle
    | [@bs.as "checkcircleo"] `checkcircleo
    | [@bs.as "check"] `check
    | [@bs.as "close"] `close
    | [@bs.as "customerservice"] `customerservice
    | [@bs.as "creditcard"] `creditcard
    | [@bs.as "codesquareo"] `codesquareo
    | [@bs.as "book"] `book
    | [@bs.as "barschart"] `barschart
    | [@bs.as "bars"] `bars
    | [@bs.as "question"] `question
    | [@bs.as "questioncircle"] `questioncircle
    | [@bs.as "questioncircleo"] `questioncircleo
    | [@bs.as "pause"] `pause
    | [@bs.as "pausecircle"] `pausecircle
    | [@bs.as "pausecircleo"] `pausecircleo
    | [@bs.as "clockcircle"] `clockcircle
    | [@bs.as "clockcircleo"] `clockcircleo
    | [@bs.as "swap"] `swap
    | [@bs.as "swapleft"] `swapleft
    | [@bs.as "swapright"] `swapright
    | [@bs.as "plussquareo"] `plussquareo
    | [@bs.as "frown"] `frown
    | [@bs.as "menufold"] `menufold
    | [@bs.as "mail"] `mail
    | [@bs.as "link"] `link
    | [@bs.as "areachart"] `areachart
    | [@bs.as "linechart"] `linechart
    | [@bs.as "home"] `home
    | [@bs.as "laptop"] `laptop
    | [@bs.as "star"] `star
    | [@bs.as "staro"] `staro
    | [@bs.as "filter"] `filter
    | [@bs.as "meho"] `meho
    | [@bs.as "meh"] `meh
    | [@bs.as "shoppingcart"] `shoppingcart
    | [@bs.as "save"] `save
    | [@bs.as "user"] `user
    | [@bs.as "videocamera"] `videocamera
    | [@bs.as "totop"] `totop
    | [@bs.as "team"] `team
    | [@bs.as "sharealt"] `sharealt
    | [@bs.as "setting"] `setting
    | [@bs.as "picture"] `picture
    | [@bs.as "phone"] `phone
    | [@bs.as "paperclip"] `paperclip
    | [@bs.as "notification"] `notification
    | [@bs.as "menuunfold"] `menuunfold
    | [@bs.as "inbox"] `inbox
    | [@bs.as "lock"] `lock
    | [@bs.as "qrcode"] `qrcode
    | [@bs.as "tags"] `tags
    | [@bs.as "tagso"] `tagso
    | [@bs.as "cloudo"] `cloudo
    | [@bs.as "cloud"] `cloud
    | [@bs.as "cloudupload"] `cloudupload
    | [@bs.as "clouddownload"] `clouddownload
    | [@bs.as "clouddownloado"] `clouddownloado
    | [@bs.as "clouduploado"] `clouduploado
    | [@bs.as "enviroment"] `enviroment
    | [@bs.as "enviromento"] `enviromento
    | [@bs.as "eye"] `eye
    | [@bs.as "eyeo"] `eyeo
    | [@bs.as "camera"] `camera
    | [@bs.as "camerao"] `camerao
    | [@bs.as "windows"] `windows
    | [@bs.as "export2"] `export2
    | [@bs.as "export"] `export
    | [@bs.as "circledowno"] `circledowno
    | [@bs.as "circledown"] `circledown
    | [@bs.as "hdd"] `hdd
    | [@bs.as "ie"] `ie
    | [@bs.as "delete"] `delete
    | [@bs.as "enter"] `enter
    | [@bs.as "pushpino"] `pushpino
    | [@bs.as "pushpin"] `pushpin
    | [@bs.as "heart"] `heart
    | [@bs.as "hearto"] `hearto
    | [@bs.as "smile-circle"] `smileCircle
    | [@bs.as "smileo"] `smileo
    | [@bs.as "frowno"] `frowno
    | [@bs.as "calculator"] `calculator
    | [@bs.as "chrome"] `chrome
    | [@bs.as "github"] `github
    | [@bs.as "iconfontdesktop"] `iconfontdesktop
    | [@bs.as "caretcircleoup"] `caretcircleoup
    | [@bs.as "upload"] `upload
    | [@bs.as "download"] `download
    | [@bs.as "piechart"] `piechart
    | [@bs.as "lock1"] `lock1
    | [@bs.as "unlock"] `unlock
    | [@bs.as "windowso"] `windowso
    | [@bs.as "dotchart"] `dotchart
    | [@bs.as "barchart"] `barchart
    | [@bs.as "codesquare"] `codesquare
    | [@bs.as "plussquare"] `plussquare
    | [@bs.as "minussquare"] `minussquare
    | [@bs.as "closesquare"] `closesquare
    | [@bs.as "closesquareo"] `closesquareo
    | [@bs.as "checksquare"] `checksquare
    | [@bs.as "checksquareo"] `checksquareo
    | [@bs.as "fastbackward"] `fastbackward
    | [@bs.as "fastforward"] `fastforward
    | [@bs.as "upsquare"] `upsquare
    | [@bs.as "downsquare"] `downsquare
    | [@bs.as "leftsquare"] `leftsquare
    | [@bs.as "rightsquare"] `rightsquare
    | [@bs.as "rightsquareo"] `rightsquareo
    | [@bs.as "leftsquareo"] `leftsquareo
    | [@bs.as "down-square-o"] `downSquareO
    | [@bs.as "up-square-o"] `upSquareO
    | [@bs.as "play"] `play
    | [@bs.as "playcircleo"] `playcircleo
    | [@bs.as "tag"] `tag
    | [@bs.as "tago"] `tago
    | [@bs.as "addfile"] `addfile
    | [@bs.as "folder1"] `folder1
    | [@bs.as "file1"] `file1
    | [@bs.as "switcher"] `switcher
    | [@bs.as "addfolder"] `addfolder
    | [@bs.as "folderopen"] `folderopen
    | [@bs.as "search1"] `search1
    | [@bs.as "ellipsis1"] `ellipsis1
    | [@bs.as "calendar"] `calendar
    | [@bs.as "filetext1"] `filetext1
    | [@bs.as "copy1"] `copy1
    | [@bs.as "jpgfile1"] `jpgfile1
    | [@bs.as "pdffile1"] `pdffile1
    | [@bs.as "exclefile1"] `exclefile1
    | [@bs.as "pptfile1"] `pptfile1
    | [@bs.as "unknowfile1"] `unknowfile1
    | [@bs.as "wordfile1"] `wordfile1
    | [@bs.as "dingding"] `dingding
    | [@bs.as "dingding-o"] `dingdingO
    | [@bs.as "mobile1"] `mobile1
    | [@bs.as "tablet1"] `tablet1
    | [@bs.as "bells"] `bells
    | [@bs.as "disconnect"] `disconnect
    | [@bs.as "database"] `database
    | [@bs.as "barcode"] `barcode
    | [@bs.as "hourglass"] `hourglass
    | [@bs.as "key"] `key
    | [@bs.as "flag"] `flag
    | [@bs.as "layout"] `layout
    | [@bs.as "printer"] `printer
    | [@bs.as "USB"] `usb
    | [@bs.as "skin"] `skin
    | [@bs.as "tool"] `tool
    | [@bs.as "car"] `car
    | [@bs.as "addusergroup"] `addusergroup
    | [@bs.as "carryout"] `carryout
    | [@bs.as "deleteuser"] `deleteuser
    | [@bs.as "deleteusergroup"] `deleteusergroup
    | [@bs.as "man"] `man
    | [@bs.as "isv"] `isv
    | [@bs.as "gift"] `gift
    | [@bs.as "idcard"] `idcard
    | [@bs.as "medicinebox"] `medicinebox
    | [@bs.as "redenvelopes"] `redenvelopes
    | [@bs.as "rest"] `rest
    | [@bs.as "Safety"] `safety
    | [@bs.as "wallet"] `wallet
    | [@bs.as "woman"] `woman
    | [@bs.as "adduser"] `adduser
    | [@bs.as "bank"] `bank
    | [@bs.as "Trophy"] `trophy
    | [@bs.as "loading1"] `loading1
    | [@bs.as "loading2"] `loading2
    | [@bs.as "like2"] `like2
    | [@bs.as "dislike2"] `dislike2
    | [@bs.as "like1"] `like1
    | [@bs.as "dislike1"] `dislike1
    | [@bs.as "bulb1"] `bulb1
    | [@bs.as "rocket1"] `rocket1
    | [@bs.as "select1"] `select1
    | [@bs.as "apple1"] `apple1
    | [@bs.as "apple-o"] `appleO
    | [@bs.as "android1"] `android1
    | [@bs.as "android"] `android
    | [@bs.as "aliwangwang-o1"] `aliwangwangO1
    | [@bs.as "aliwangwang"] `aliwangwang
    | [@bs.as "pay-circle1"] `payCircle1
    | [@bs.as "pay-circle-o1"] `payCircleO1
    | [@bs.as "poweroff"] `poweroff
    | [@bs.as "trademark"] `trademark
    | [@bs.as "find"] `find
    | [@bs.as "copyright"] `copyright
    | [@bs.as "sound"] `sound
    | [@bs.as "earth"] `earth
    | [@bs.as "wifi"] `wifi
    | [@bs.as "sync"] `sync
    | [@bs.as "login"] `login
    | [@bs.as "logout"] `logout
    | [@bs.as "reload1"] `reload1
    | [@bs.as "message1"] `message1
    | [@bs.as "shake"] `shake
    | [@bs.as "API"] `api
    | [@bs.as "appstore-o"] `appstoreO
    | [@bs.as "appstore1"] `appstore1
    | [@bs.as "scan1"] `scan1
    | [@bs.as "exception1"] `exception1
    | [@bs.as "contacts"] `contacts
    | [@bs.as "solution1"] `solution1
    | [@bs.as "fork"] `fork
    | [@bs.as "edit"] `edit
    | [@bs.as "form"] `form
    | [@bs.as "warning"] `warning
    | [@bs.as "table"] `table
    | [@bs.as "profile"] `profile
    | [@bs.as "dashboard"] `dashboard
    | [@bs.as "indent-left"] `indentLeft
    | [@bs.as "indent-right"] `indentRight
    | [@bs.as "menu-unfold"] `menuUnfold
    | [@bs.as "menu-fold"] `menuFold
    | [@bs.as "antdesign"] `antdesign
    | [@bs.as "alipay-square"] `alipaySquare
    | [@bs.as "codepen-circle"] `codepenCircle
    | [@bs.as "google"] `google
    | [@bs.as "amazon"] `amazon
    | [@bs.as "codepen"] `codepen
    | [@bs.as "facebook-square"] `facebookSquare
    | [@bs.as "dropbox"] `dropbox
    | [@bs.as "googleplus"] `googleplus
    | [@bs.as "linkedin-square"] `linkedinSquare
    | [@bs.as "medium-monogram"] `mediumMonogram
    | [@bs.as "gitlab"] `gitlab
    | [@bs.as "medium-wordmark"] `mediumWordmark
    | [@bs.as "QQ"] `qq
    | [@bs.as "skype"] `skype
    | [@bs.as "taobao-square"] `taobaoSquare
    | [@bs.as "alipay-circle"] `alipayCircle
    | [@bs.as "youtube"] `youtube
    | [@bs.as "wechat"] `wechat
    | [@bs.as "twitter"] `twitter
    | [@bs.as "weibo"] `weibo
    | [@bs.as "HTML"] `html
    | [@bs.as "taobao-circle"] `taobaoCircle
    | [@bs.as "weibo-circle"] `weiboCircle
    | [@bs.as "weibo-square"] `weiboSquare
    | [@bs.as "CodeSandbox"] `codeSandbox
    | [@bs.as "aliyun"] `aliyun
    | [@bs.as "zhihu"] `zhihu
    | [@bs.as "behance"] `behance
    | [@bs.as "dribbble"] `dribbble
    | [@bs.as "dribbble-square"] `dribbbleSquare
    | [@bs.as "behance-square"] `behanceSquare
    | [@bs.as "file-markdown"] `fileMarkdown
    | [@bs.as "instagram"] `instagram
    | [@bs.as "yuque"] `yuque
    | [@bs.as "slack"] `slack
    | [@bs.as "slack-square"] `slackSquare
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
    ~name=`stepforward,
    ~color="black",
    ~size=12,
    ~style=BsReactNative.Style.style([]),
    children,
  ) =>
ReasonReact.wrapJsForReason(
  ~reactClass=AntDesign.js,
  ~props=
    AntDesign.props(
      ~allowFontScaling,
      ~name=AntDesign.nameToJs(name),
      ~size,
      ~color,
      ~style,
      (),
    ),
  children,
);