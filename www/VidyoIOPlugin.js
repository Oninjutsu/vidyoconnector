var exec = require('cordova/exec');

function plugin() {

}

plugin.prototype.launchVidyoIO = function(args) {
    exec(function(res){}, function(err){}, "VidyoIOPlugin", "launchVidyoIO", args);
}

VidyoIOPlugin.prototype.disconnect = function() {
    exec(function(res){},function(err){}, "VidyoIOPlugin", "disconnect", null);
}

module.exports = new plugin();
