(window["webpackJsonp"] = window["webpackJsonp"] || []).push([["home-home-module"],{

/***/ "./node_modules/raw-loader/index.js!./src/app/home/home.page.html":
/*!***************************************************************!*\
  !*** ./node_modules/raw-loader!./src/app/home/home.page.html ***!
  \***************************************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = "\n<ion-header>\n  <ion-toolbar>\n    <ion-title>\n       LJ App\n    </ion-title>\n  </ion-toolbar>\n</ion-header>\n\n<ion-content class=\"\" style=\"text-align: center\">\n  <div  class=\" content\">\n\n<ng-container *ngFor='let x of buttons let index=index; let odd=odd;'>\n    <ion-button *ngIf=\"x.call != 'quick_link'\" color='secondary' [ngClass]=\"odd ? 'odd' : 'even' \"   class=\"w-100 mb-8\" (click)='openNative(x.call)'>\n        {{x.label}}\n\n    </ion-button>\n<ng-container *ngIf=\"x.call == 'quick_link'\">\n    <ion-item>\n    <ion-label   position=\"floating\">Quick Link </ion-label>\n    <ion-input   type='text' #ql></ion-input>\n</ion-item>\n    <ion-button color='secondary' [ngClass]=\"odd ? 'odd' : 'even' \"   class=\"w-100 mb-8\" [disabled]='(!ql.value || working) '  (click)=\"onClick(ql.value)\">\n\n  {{x.label}}\n</ion-button><br><br>\n</ng-container>\n</ng-container>\n\n  </div>\n</ion-content>\n"

/***/ }),

/***/ "./src/app/home/home.module.ts":
/*!*************************************!*\
  !*** ./src/app/home/home.module.ts ***!
  \*************************************/
/*! exports provided: HomePageModule */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "HomePageModule", function() { return HomePageModule; });
/* harmony import */ var tslib__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! tslib */ "./node_modules/tslib/tslib.es6.js");
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");
/* harmony import */ var _angular_common__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! @angular/common */ "./node_modules/@angular/common/fesm5/common.js");
/* harmony import */ var _ionic_angular__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! @ionic/angular */ "./node_modules/@ionic/angular/dist/fesm5.js");
/* harmony import */ var _angular_forms__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! @angular/forms */ "./node_modules/@angular/forms/fesm5/forms.js");
/* harmony import */ var _angular_router__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! @angular/router */ "./node_modules/@angular/router/fesm5/router.js");
/* harmony import */ var _home_page__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./home.page */ "./src/app/home/home.page.ts");







var HomePageModule = /** @class */ (function () {
    function HomePageModule() {
    }
    HomePageModule = tslib__WEBPACK_IMPORTED_MODULE_0__["__decorate"]([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_1__["NgModule"])({
            imports: [
                _angular_common__WEBPACK_IMPORTED_MODULE_2__["CommonModule"],
                _angular_forms__WEBPACK_IMPORTED_MODULE_4__["FormsModule"],
                _ionic_angular__WEBPACK_IMPORTED_MODULE_3__["IonicModule"],
                _angular_router__WEBPACK_IMPORTED_MODULE_5__["RouterModule"].forChild([
                    {
                        path: '',
                        component: _home_page__WEBPACK_IMPORTED_MODULE_6__["HomePage"]
                    }
                ])
            ],
            declarations: [_home_page__WEBPACK_IMPORTED_MODULE_6__["HomePage"]]
        })
    ], HomePageModule);
    return HomePageModule;
}());



/***/ }),

/***/ "./src/app/home/home.page.scss":
/*!*************************************!*\
  !*** ./src/app/home/home.page.scss ***!
  \*************************************/
/*! no static exports found */
/***/ (function(module, exports) {

module.exports = ".odd {\n  --ion-color-base: #2fbcff !important;\n}\n/*# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIi9Vc2Vycy91c2VyL0Rlc2t0b3AvY29kZS9MSkluZG9vcklvbmljL1NESyBpbnRlZ3JhdGlvbiBleGFtcGxlL2lvbmljQXBwQ3Jvc3N3YWxrL3NyYy9hcHAvaG9tZS9ob21lLnBhZ2Uuc2NzcyIsInNyYy9hcHAvaG9tZS9ob21lLnBhZ2Uuc2NzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFFQTtFQUNJLG9DQUFBO0FDREoiLCJmaWxlIjoic3JjL2FwcC9ob21lL2hvbWUucGFnZS5zY3NzIiwic291cmNlc0NvbnRlbnQiOlsiXG5cbi5vZGR7XG4gICAgLS1pb24tY29sb3ItYmFzZTogIzJmYmNmZiAhaW1wb3J0YW50O1xufSIsIi5vZGQge1xuICAtLWlvbi1jb2xvci1iYXNlOiAjMmZiY2ZmICFpbXBvcnRhbnQ7XG59Il19 */"

/***/ }),

/***/ "./src/app/home/home.page.ts":
/*!***********************************!*\
  !*** ./src/app/home/home.page.ts ***!
  \***********************************/
/*! exports provided: HomePage */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, "HomePage", function() { return HomePage; });
/* harmony import */ var tslib__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! tslib */ "./node_modules/tslib/tslib.es6.js");
/* harmony import */ var _angular_core__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! @angular/core */ "./node_modules/@angular/core/fesm5/core.js");


var HomePage = /** @class */ (function () {
    function HomePage() {
        this.buttons = [
            { label: 'Get Directions (Directory)', call: 'get_directions' },
            { label: 'Events', call: 'events' },
            { label: 'Favorites', call: 'fav' },
            { label: 'Notifications', call: 'notification' },
            { label: 'Goto QuickLink', call: 'quick_link' }
        ];
    }
    HomePage.prototype.ngOnInit = function () {
        setTimeout(function () {
            window.hybrid_layer.appLaunched();
        }, 10);
    };
    HomePage.prototype.openNative = function (callType) {
        if (callType === void 0) { callType = null; }
        if (!callType) {
            console.log('Error in initialistion of the function');
        }
        else {
            window.hybrid_layer[callType]();
        }
    };
    HomePage.prototype.onClick = function (ql) {
        window.hybrid_layer.quick_link(ql);
    };
    HomePage = tslib__WEBPACK_IMPORTED_MODULE_0__["__decorate"]([
        Object(_angular_core__WEBPACK_IMPORTED_MODULE_1__["Component"])({
            selector: 'app-home',
            template: __webpack_require__(/*! raw-loader!./home.page.html */ "./node_modules/raw-loader/index.js!./src/app/home/home.page.html"),
            styles: [__webpack_require__(/*! ./home.page.scss */ "./src/app/home/home.page.scss")]
        }),
        tslib__WEBPACK_IMPORTED_MODULE_0__["__metadata"]("design:paramtypes", [])
    ], HomePage);
    return HomePage;
}());



/***/ })

}]);
//# sourceMappingURL=home-home-module-es5.js.map