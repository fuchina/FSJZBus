Pod::Spec.new do |s|
  s.name             = 'FSJZBus'
  s.version          = '1.0.1'
  s.summary          = 'FSJZBus is a tool for apps'
  s.description      = <<-DESC
		This is a very small software library, offering a few methods to help with programming.
    DESC

  s.homepage         = 'https://github.com/fuchina/FSJZBus'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fudon' => '1245102331@qq.com' }
  
  s.source           = {:git => 'https://github.com/fuchina/FSJZBus.git', :tag => s.version.to_s}

  s.source_files = 'FSJZBus/classes/*.{h}'
  s.ios.vendored_libraries = 'FSJZBus/libs/libFSJZBus.a'
  s.resources = "FSJZBus/website_logos/*"

  s.ios.deployment_target = '8.2'
  
  s.frameworks = 'UIKit','AssetsLibrary','MultipeerConnectivity','WebKit','Photos','LocalAuthentication','StoreKit'
  
  s.dependency   'FSJZKit'
  s.dependency   'FSLocation'
  s.dependency   'FSGesture'
  s.dependency   'YYKit'

end
