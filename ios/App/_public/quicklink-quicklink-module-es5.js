(window["webpackJsonp"] = window["webpackJsonp"] || []).push([["quicklink-quicklink-module"],{

/***/ "./node_modules/raw-loader/index.js!./src/app/quicklink/quicklink.page.html":
/*!*************************************************************************!*\
  !*** ./node_modules/raw-loader!./src/app/quicklink/quicklink.page.html ***!
  \*************************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "<ion-header>\n  <ion-toolbar>\n      <ion-buttons slot=\"start\">\n          <ion-back-button style=\"color:black;\" ></ion-back-button>\n        </ion-buttons>\n    <ion-title>quicklink</ion-title>\n  </ion-toolbar>\n</ion-header>\n\n<ion-content>\n  <div class=\"content\">\n<ion-item>\n      <ion-label position=\"floating\">Quick Link </ion-label>\n      <ion-input type='text' #ql></ion-input>\n    </ion-item>\n    <div style=\"text-align: right;\n    margin-top: 20px;\">\n  <ion-button color='secondary' [disabled]='(!ql.value || working) '  (click)=\"onClick(ql.value)\"> \n   <span *ngIf='!working'>Go</span> \n   <span *ngIf='working'>\n     <ion-spinner name=\"lines-small\"></ion-spinner>\n      <span class=\"working-span\">working</span>\n     </span>\n  </ion-button>\n    </div>\n  </div>\n</ion-content>"

/***/ }),

/***/ "./src/app/quicklink/quicklink.module.ts":
/*!***********************************************!*\
  !*** ./src/app/quicklink/quicklink.module.ts ***!
  \***********************************************/
/*! exports provided: QuicklinkPageModule */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "QuicklinkPageModule", function() { return QuicklinkPageModule; });
/* harmony import */ var tslib__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! tslib */ "./node_modules/tslib/tslib.es6.js");
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_common__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! @angular/common */ "./node_modules/@angular/common/fesm5/common.js");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _ionic_angular__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @ionic/angular */ "./node_modules/@ionic/angular/dist/fesm5.js");
/* harmony import */ var _quicklink_page__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./quicklink.page */ "./src/app/quicklink/quicklink.page.ts");







var routes = [
    {
        path: '',
        component: _quicklink_page__WEBPACK_IMPORTED_MODULE_6__["QuicklinkPage"]
    }
];
var QuicklinkPageModule = /** @class */ (function () {
    function QuicklinkPageModule() {
    }
    QuicklinkPageModule = tslib__WEBPACK_IMPORTED_MODULE_0__["__decorate"]([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_1__["NgModule"])({
            imports: [
                _angular_common__WEBPACK_IMPORTED_MODULE_2__["CommonModule"],
                _angular_forms__WEBPACK_IMPORTED_MODULE_3__["FormsModule"],
                _ionic_angular__WEBPACK_IMPORTED_MODULE_5__["IonicModule"],
                _angular_router__WEBPACK_IMPORTED_MODULE_4__["RouterModule"].forChild(routes)
            ],
            declarations: [_quicklink_page__WEBPACK_IMPORTED_MODULE_6__["QuicklinkPage"]]
        })
    ], QuicklinkPageModule);
    return QuicklinkPageModule;
}());



/***/ }),

/***/ "./src/app/quicklink/quicklink.page.scss":
/*!***********************************************!*\
  !*** ./src/app/quicklink/quicklink.page.scss ***!
  \***********************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".working-span {\n  bottom: 8px;\n  padding: 5px;\n  position: relative;\n}\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIi9Vc2Vycy91c2VyL0Rlc2t0b3AvY29kZS9MSkluZG9vcklvbmljL1NESyBpbnRlZ3JhdGlvbiBleGFtcGxlL2lvbmljQXBwQ3Jvc3N3YWxrL3NyYy9hcHAvcXVpY2tsaW5rL3F1aWNrbGluay5wYWdlLnNjc3MiLCJzcmMvYXBwL3F1aWNrbGluay9xdWlja2xpbmsucGFnZS5zY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBO0VBQ0ksV0FBQTtFQUNBLFlBQUE7RUFDQSxrQkFBQTtBQ0NKIiwiZmlsZSI6InNyYy9hcHAvcXVpY2tsaW5rL3F1aWNrbGluay5wYWdlLnNjc3MiLCJzb3VyY2VzQ29udGVudCI6WyIud29ya2luZy1zcGFue1xuICAgIGJvdHRvbTogOHB4O1xuICAgIHBhZGRpbmc6IDVweDtcbiAgICBwb3NpdGlvbjogcmVsYXRpdmU7XG59IiwiLndvcmtpbmctc3BhbiB7XG4gIGJvdHRvbTogOHB4O1xuICBwYWRkaW5nOiA1cHg7XG4gIHBvc2l0aW9uOiByZWxhdGl2ZTtcbn0iXX0= */"

/***/ }),

/***/ "./src/app/quicklink/quicklink.page.ts":
/*!*********************************************!*\
  !*** ./src/app/quicklink/quicklink.page.ts ***!
  \*********************************************/
/*! exports provided: QuicklinkPage */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "QuicklinkPage", function() { return QuicklinkPage; });
/* harmony import */ var tslib__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! tslib */ "./node_modules/tslib/tslib.es6.js");
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");


var QuicklinkPage = /** @class */ (function () {
    function QuicklinkPage() {
        this.working = false;
    }
    QuicklinkPage.prototype.ngOnInit = function () {
    };
    QuicklinkPage.prototype.onClick = function (ql) {
        this.working = true;
        window.hybrid_layer.quick_link(ql);
        this.working = false;
    };
    QuicklinkPage = tslib__WEBPACK_IMPORTED_MODULE_0__["__decorate"]([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_1__["Component"])({
            selector: 'app-quicklink',
            template: __webpack_require__(/*! raw-loader!./quicklink.page.html */ "./node_modules/raw-loader/index.js!./src/app/quicklink/quicklink.page.html"),
            styles: [__webpack_require__(/*! ./quicklink.page.scss */ "./src/app/quicklink/quicklink.page.scss")]
        }),
        tslib__WEBPACK_IMPORTED_MODULE_0__["__metadata"]("design:paramtypes", [])
    ], QuicklinkPage);
    return QuicklinkPage;
}());



/***/ })

}]);
//# sourceMappingURL=quicklink-quicklink-module-es5.js.map