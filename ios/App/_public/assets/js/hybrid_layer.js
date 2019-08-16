var hybrid_layer = new hybridLayer(platformDetect())
console.log('something' + platformDetect())
function platformDetect(){
    var userAgent = window.navigator.userAgent.toLowerCase(),
    ios = /iphone|ipod|ipad/.test( userAgent );
    if( ios ) {
        return 'ios'
    } else {
        return 'android'
    };
}
function hybridLayer(platform){
    this.platform = platform;
    let methods = {
        get_directions : {
            ios : function(){
                window.webkit.messageHandlers.IOS_INTERFACE_GET_DIRECTIONS.postMessage('param')
                
            },
            android : function(){androidCallback.get_directions() }
        },
        find_me : {
            ios : function(){
                
                window.webkit.messageHandlers.IOS_INTERFACE_FIND_ME.postMessage('')
                
            },
            android : function(){}
        },
        events : {
            ios : function(){
                window.webkit.messageHandlers.IOS_INTERFACE_EVENTS.postMessage('')
                
            },
            android : function(){androidCallback.events()}
        },
        fav : {
            ios : function(){
                window.webkit.messageHandlers.IOS_INTERFACE_FAV.postMessage('')
                
            },
            android : function(){androidCallback.fav()}
        },
        notification : {
            ios : function(){
                window.webkit.messageHandlers.IOS_INTERFACE_NOTI.postMessage('')
                
            },
            android : function(){androidCallback.notification()}
        },
        quick_link : {
            ios : function(quick_link){
                window.webkit.messageHandlers.IOS_INTERFACE_QL.postMessage(quick_link)
                
            },
            android : function(){androidCallback.quick_link()}
        },
        appLaunched : {
            ios : function(){window.webkit.messageHandlers.IOS_INTERFACE_APP_LAUNCHED.postMessage('');},
            android : function(){}
        }
    }
    
    this.get_directions = methods.get_directions[platform];
    this.find_me = methods.find_me[platform];
    this.events = methods.events[platform];
    this.fav = methods.fav[platform];
    this.notification = methods.notification[platform];
    this.quick_link = methods.quick_link[platform];
    this.appLaunched = methods.appLaunched[platform];
}

