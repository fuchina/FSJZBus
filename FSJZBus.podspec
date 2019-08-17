Pod::Spec.new do |s|
  s.name             = 'FSJZBus'
  s.version          = '1.7'
  s.summary          = 'FSJZBus is a tool for apps'
  s.description      = <<-DESC
		This is a very small software library, offering a few methods to help with programming.
    DESC

  s.homepage         = 'https://github.com/fuchina/FSJZBus'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fudon' => '1245102331@qq.com' }
  
  s.source           = {:git => 'https://github.com/fuchina/FSJZBus.git', :tag => s.version.to_s}

  s.source_files = 'FSJZBus/classes/*.{h}','FSJZBus/sources/*.{h,m}'
  
  # 静态库名字不能跟组件一样，不然会冲突，所以改成libFSJZBus1.a
  s.ios.vendored_libraries = 'FSJZBus/libs/libFSJZBus1.a'
  
  s.resources = "FSJZBus/website_logos/*"

  s.ios.deployment_target = '9.0'
  
  s.frameworks = 'UIKit','AssetsLibrary','MultipeerConnectivity','WebKit','Photos','LocalAuthentication','StoreKit','GLKit'
  
  s.dependency   'FSJZKit'
  s.dependency   'FSLocation'
  s.dependency   'FSGesture'
  s.dependency   'YYKit'
  s.dependency   'AMap3DMap','6.7.0'

end
