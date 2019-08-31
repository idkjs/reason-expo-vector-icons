open ReactNative;
// This is the version of the demo from the orginal repo
module Icons = ReasonExpoVectorIcons;

let styles =
  Style.(
    StyleSheet.create({
      "container":
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`center,
          ~backgroundColor="#F5FCFF",
          (),
        ),
      "instructions": style(~textAlign=`center, ~color="#ffffff", ()),
    })
  );
module Styles = {
  open Style;
  let container =
    style(~flex=1., ~alignItems=`center, ~justifyContent=`center,());
  let profileContainer =
    style(~backgroundColor="rgb(76, 217, 100)",());
};
[@react.component]
let app = () => {
  <View style=styles##container>
    <SafeAreaView
      style=StyleSheet.flatten([|Styles.container, Styles.profileContainer|])>
      <View>
        <Icons.Ionicons name=`iosAddCircle size=32 color="magenta" />
        <Icons.Ionicons name=`iosAdd size=32 color="green" />
        <Icons.AntDesign name=`stepforward size=32 color="red" />
        <Icons.Feather name=`airplay size=32 color="yellow" />
        <Icons.Foundation name=`dieThree size=32 color="yellow" />
        <Icons.Octicons name=`flame size=32 color="orange" />
        <Icons.SimpleLineIcons name=`eyeglass size=32 color="aqua" />
        <Icons.Zocial name=`twitter size=32 color="lightblue" />
      </View>
    </SafeAreaView>
  </View>;
};