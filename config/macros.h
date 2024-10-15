//
// Created by apetrovic on 10/15/2024.
//

#pragma once

#include <dt-bindings/zmk/keys.h>

   macros {
        LOG_AND: LOG_AND {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp AMPS &kp AMPS>;
        };

        LOG_OR: LOG_OR {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp PIPE &kp PIPE>;
        };

        INCLUDE: INCLUDE {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings =
                <&macro_tap>,
                <&kp I &kp N &kp C &kp L &kp U &kp D &kp E &kp DQT &kp DQT &kp LEFT>;
        };

        ARROW_OP: ARROW_OP {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp MINUS &kp GT>;
        };

        ARROW_FN: ARROW_FN {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp EQUAL &kp GT>;
        };

        DBL_QT: DBL_QT {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp DQT &kp DQT &kp LEFT>;
        };

        LSFT_OP: LSFT_OP {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp LT &kp LT>;
        };

        RSFT_OP: RSFT_OP {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp GT &kp GT>;
        };

        UPROPERTY: UPROPERTY {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings =
                <&macro_tap>,
                <&kp LS(U) &kp LS(P) &kp LS(R) &kp LS(O) &kp LS(P) &kp LS(E) &kp LS(R) &kp LS(T) &kp LS(Y) &kp LPAR &kp RPAR &kp LEFT>;
        };

        UFUNCTION: UFUNCTION {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings =
                <&macro_tap>,
                <&kp LS(U) &kp LS(F) &kp LS(U) &kp LS(N) &kp LS(C) &kp LS(T) &kp LS(I) &kp LS(O) &kp LS(N) &kp LPAR &kp RPAR &kp LEFT>,
                <&macro_press>;
        };

        DBL_EQL: DBL_EQL {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp EQUAL &kp EQUAL>;
        };

        TRPL_EQL: TRPL_EQL {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp EQUAL &kp EQUAL &kp EQUAL>;
        };

        NOT_EQL: NOT_EQL {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp EXCL &kp EQUAL>;
        };

        GT_EQL: GT_EQL {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp GT &kp EQUAL>;
        };

        LT_EQL: LT_EQL {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp LT &kp EQUAL>;
        };

        PRN: PRN {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp LPAR &kp RPAR &kp LEFT>;
        };

        BRC: BRC {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp LBRC &kp RBRC &kp LEFT>;
        };

        BKT: BKT {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp LBKT &kp RBKT &kp LEFT>;
        };

        ANGL: ANGL {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp LT &kp GT &kp LEFT>;
        };

        INC: INC {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp PLUS &kp PLUS>;
        };

        DEC: DEC {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&macro_tap>, <&kp MINUS &kp MINUS>;
        };
    };