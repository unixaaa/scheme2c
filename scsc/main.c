
/* SCHEME->C */

#include <objects.h>

int main();
DEFSTATICTSCP( sc_2dlog_2ddefault_v );
DEFSTATICTSCP( initialize_2dcompile_v );
DEFSTATICTSCP( do_2ddefine_2dconstant_v );
DEFSTATICTSCP( sc_2dinclude_2ddirs_v );
DEFSTATICTSCP( sc_2dinput_v );
DEFSTATICTSCP( sc_2dsource_2dname_v );
DEFSTATICTSCP( sc_2dicode_v );
DEFSTATICTSCP( sc_2derror_v );
DEFSTATICTSCP( sc_2dlog_v );
DEFSTATICTSCP( sc_2dstack_2dtrace_v );
DEFSTATICTSCP( sc_2dinterpreter_v );
DEFSTATICTSCP( docompile_v );
DEFSTATICTSCP( sc_2derror_2dcnt_v );
DEFSTATICTSCP( module_2dname_v );
DEFSTATICTSCP( close_2dsc_2dfiles_v );
DEFCSTRING( t2600, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c2549 );
DEFSTATICTSCP( c2548 );
DEFCSTRING( t2601, ".S2C" );
DEFSTATICTSCP( c2531 );
DEFCSTRING( t2602, ".c" );
DEFSTATICTSCP( c2530 );
DEFCSTRING( t2603, "~a:~%" );
DEFSTATICTSCP( c2481 );
DEFCSTRING( t2604, ".sc" );
DEFSTATICTSCP( c2479 );
DEFCSTRING( t2605, "cc" );
DEFSTATICTSCP( c2447 );
DEFCSTRING( t2606, "\\" );
DEFSTATICTSCP( c2446 );
DEFCSTRING( t2607, "Microsoft Windows 3.x" );
DEFSTATICTSCP( c2445 );
DEFCSTRING( t2608, "SC-TO-C.o" );
DEFSTATICTSCP( c2443 );
DEFCSTRING( t2609, "SC-TO-C.c" );
DEFSTATICTSCP( c2442 );
DEFCSTRING( t2610, "-lsigsegv" );
DEFSTATICTSCP( c2440 );
DEFCSTRING( t2611, "-lm" );
DEFSTATICTSCP( c2429 );
DEFCSTRING( t2612, "-pg" );
DEFSTATICTSCP( c2428 );
DEFCSTRING( t2613, "-c" );
DEFSTATICTSCP( c2427 );
DEFCSTRING( t2614, " -I" );
DEFSTATICTSCP( c2382 );
DEFCSTRING( t2615, "}~%" );
DEFSTATICTSCP( c2376 );
DEFCSTRING( t2616, "   SCHEMEEXIT();~%" );
DEFSTATICTSCP( c2375 );
DEFCSTRING( t2617, 
            "   screp_read_2deval_2dprint( sc_clarguments( argc, argv ) );~%\
" );
DEFSTATICTSCP( c2374 );
DEFCSTRING( t2618, "screp" );
DEFSTATICTSCP( c2373 );
DEFCSTRING( t2619, "   ~a__init();~%" );
DEFSTATICTSCP( c2372 );
DEFCSTRING( t2620, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c2361 );
DEFSTATICTSCP( c2360 );
DEFCSTRING( t2621, 
            "   INITHEAP( 0, argc, argv, screp_read_2deval_2dprint );~%" );
DEFSTATICTSCP( c2325 );
DEFCSTRING( t2622, "{~%" );
DEFSTATICTSCP( c2324 );
DEFCSTRING( t2623, "int main(int argc, char **argv)~%" );
DEFSTATICTSCP( c2323 );
DEFCSTRING( t2624, "extern TSCP screp_read_2deval_2dprint();~%" );
DEFSTATICTSCP( c2322 );
DEFCSTRING( t2625, "#include \"~a/~a\"~%" );
DEFSTATICTSCP( c2321 );
DEFCSTRING( t2626, ")" );
DEFSTATICTSCP( c2305 );
DEFCSTRING( t2627, " " );
DEFSTATICTSCP( c2304 );
DEFCSTRING( t2628, "(define-constant " );
DEFSTATICTSCP( c2293 );
DEFCSTRING( t2629, "/" );
DEFSTATICTSCP( c2276 );
DEFCSTRING( t2630, "libs2c_p.a" );
DEFSTATICTSCP( c2221 );
DEFCSTRING( t2631, "libs2c.a" );
DEFSTATICTSCP( c2210 );
DEFCSTRING( t2632, "predef.sc" );
DEFSTATICTSCP( c2189 );
DEFSTATICTSCP( c2171 );
DEFSTATICTSCP( t2633 );
DEFCSTRING( t2635, "-peep" );
DEFSTATICTSCP( t2634 );
DEFSTATICTSCP( t2636 );
DEFCSTRING( t2638, "-lap" );
DEFSTATICTSCP( t2637 );
DEFSTATICTSCP( t2639 );
DEFCSTRING( t2641, "-tree" );
DEFSTATICTSCP( t2640 );
DEFSTATICTSCP( t2642 );
DEFCSTRING( t2644, "-lambda" );
DEFSTATICTSCP( t2643 );
DEFSTATICTSCP( t2645 );
DEFCSTRING( t2647, "-transform" );
DEFSTATICTSCP( t2646 );
DEFSTATICTSCP( t2648 );
DEFCSTRING( t2650, "-closed" );
DEFSTATICTSCP( t2649 );
DEFSTATICTSCP( t2651 );
DEFCSTRING( t2653, "-expand" );
DEFSTATICTSCP( t2652 );
DEFSTATICTSCP( t2654 );
DEFCSTRING( t2656, "-macro" );
DEFSTATICTSCP( t2655 );
DEFSTATICTSCP( t2657 );
DEFCSTRING( t2659, "-source" );
DEFSTATICTSCP( t2658 );
DEFCSTRING( t2660, "(define-constant *type-check* #f)" );
DEFSTATICTSCP( c2156 );
DEFCSTRING( t2661, "(define-constant *bounds-check* #f)" );
DEFSTATICTSCP( c2150 );
DEFCSTRING( t2662, "(define-constant *fixed-only* #t)" );
DEFSTATICTSCP( c2139 );
DEFCSTRING( t2663, "-cc" );
DEFSTATICTSCP( c2100 );
DEFCSTRING( t2664, "-C" );
DEFSTATICTSCP( c2096 );
DEFCSTRING( t2665, "-On" );
DEFSTATICTSCP( c2095 );
DEFCSTRING( t2666, "-Og" );
DEFSTATICTSCP( c2094 );
DEFCSTRING( t2667, "-Ob" );
DEFSTATICTSCP( c2093 );
DEFCSTRING( t2668, "-Ot" );
DEFSTATICTSCP( c2092 );
DEFCSTRING( t2669, "-log" );
DEFSTATICTSCP( c2089 );
DEFCSTRING( t2670, "-LIBDIR" );
DEFSTATICTSCP( c2083 );
DEFCSTRING( t2671, "-m" );
DEFSTATICTSCP( c2074 );
DEFCSTRING( t2672, "-I" );
DEFSTATICTSCP( c2065 );
DEFCSTRING( t2673, "-i" );
DEFSTATICTSCP( c2061 );
DEFCSTRING( t2674, "-f" );
DEFSTATICTSCP( c2041 );
DEFSTATICTSCP( c2015 );
DEFCSTRING( t2675, "../scrt/libs2c_p.a" );
DEFSTATICTSCP( c2012 );
DEFCSTRING( t2676, "../scrt/libs2c.a" );
DEFSTATICTSCP( c2010 );
DEFCSTRING( t2677, "../scrt" );
DEFSTATICTSCP( c2008 );
DEFCSTRING( t2678, "objects.h" );
DEFSTATICTSCP( c2006 );
DEFCSTRING( t2679, "../scrt/predef.sc" );
DEFSTATICTSCP( c2004 );
DEFCSTRING( t2680, "15mar93jfb" );
DEFSTATICTSCP( c2001 );

static void  init_constants()
{
        TSCP  X1;

        sc_2dlog_2ddefault_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-LOG-DEFAULT\
" ) );
        CONSTANTEXP( ADR( sc_2dlog_2ddefault_v ) );
        initialize_2dcompile_v = STRINGTOSYMBOL( CSTRING_TSCP( "INITIALIZE-C\
OMPILE" ) );
        CONSTANTEXP( ADR( initialize_2dcompile_v ) );
        do_2ddefine_2dconstant_v = STRINGTOSYMBOL( CSTRING_TSCP( "DO-DEFINE-\
CONSTANT" ) );
        CONSTANTEXP( ADR( do_2ddefine_2dconstant_v ) );
        sc_2dinclude_2ddirs_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-INCLUDE-DI\
RS" ) );
        CONSTANTEXP( ADR( sc_2dinclude_2ddirs_v ) );
        sc_2dinput_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-INPUT" ) );
        CONSTANTEXP( ADR( sc_2dinput_v ) );
        sc_2dsource_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-SOURCE-NAME\
" ) );
        CONSTANTEXP( ADR( sc_2dsource_2dname_v ) );
        sc_2dicode_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-ICODE" ) );
        CONSTANTEXP( ADR( sc_2dicode_v ) );
        sc_2derror_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-ERROR" ) );
        CONSTANTEXP( ADR( sc_2derror_v ) );
        sc_2dlog_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-LOG" ) );
        CONSTANTEXP( ADR( sc_2dlog_v ) );
        sc_2dstack_2dtrace_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-STACK-TRACE\
" ) );
        CONSTANTEXP( ADR( sc_2dstack_2dtrace_v ) );
        sc_2dinterpreter_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-INTERPRETER" ) );
        CONSTANTEXP( ADR( sc_2dinterpreter_v ) );
        docompile_v = STRINGTOSYMBOL( CSTRING_TSCP( "DOCOMPILE" ) );
        CONSTANTEXP( ADR( docompile_v ) );
        sc_2derror_2dcnt_v = STRINGTOSYMBOL( CSTRING_TSCP( "SC-ERROR-CNT" ) );
        CONSTANTEXP( ADR( sc_2derror_2dcnt_v ) );
        module_2dname_v = STRINGTOSYMBOL( CSTRING_TSCP( "MODULE-NAME" ) );
        CONSTANTEXP( ADR( module_2dname_v ) );
        close_2dsc_2dfiles_v = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSE-SC-FILES\
" ) );
        CONSTANTEXP( ADR( close_2dsc_2dfiles_v ) );
        c2549 = CSTRING_TSCP( t2600 );
        CONSTANTEXP( ADR( c2549 ) );
        c2548 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c2548 ) );
        c2531 = CSTRING_TSCP( t2601 );
        CONSTANTEXP( ADR( c2531 ) );
        c2530 = CSTRING_TSCP( t2602 );
        CONSTANTEXP( ADR( c2530 ) );
        c2481 = CSTRING_TSCP( t2603 );
        CONSTANTEXP( ADR( c2481 ) );
        c2479 = CSTRING_TSCP( t2604 );
        CONSTANTEXP( ADR( c2479 ) );
        c2447 = CSTRING_TSCP( t2605 );
        CONSTANTEXP( ADR( c2447 ) );
        c2446 = CSTRING_TSCP( t2606 );
        CONSTANTEXP( ADR( c2446 ) );
        c2445 = CSTRING_TSCP( t2607 );
        CONSTANTEXP( ADR( c2445 ) );
        c2443 = CSTRING_TSCP( t2608 );
        CONSTANTEXP( ADR( c2443 ) );
        c2442 = CSTRING_TSCP( t2609 );
        CONSTANTEXP( ADR( c2442 ) );
        c2440 = CSTRING_TSCP( t2610 );
        CONSTANTEXP( ADR( c2440 ) );
        c2429 = CSTRING_TSCP( t2611 );
        CONSTANTEXP( ADR( c2429 ) );
        c2428 = CSTRING_TSCP( t2612 );
        CONSTANTEXP( ADR( c2428 ) );
        c2427 = CSTRING_TSCP( t2613 );
        CONSTANTEXP( ADR( c2427 ) );
        c2382 = CSTRING_TSCP( t2614 );
        CONSTANTEXP( ADR( c2382 ) );
        c2376 = CSTRING_TSCP( t2615 );
        CONSTANTEXP( ADR( c2376 ) );
        c2375 = CSTRING_TSCP( t2616 );
        CONSTANTEXP( ADR( c2375 ) );
        c2374 = CSTRING_TSCP( t2617 );
        CONSTANTEXP( ADR( c2374 ) );
        c2373 = CSTRING_TSCP( t2618 );
        CONSTANTEXP( ADR( c2373 ) );
        c2372 = CSTRING_TSCP( t2619 );
        CONSTANTEXP( ADR( c2372 ) );
        c2361 = CSTRING_TSCP( t2620 );
        CONSTANTEXP( ADR( c2361 ) );
        c2360 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c2360 ) );
        c2325 = CSTRING_TSCP( t2621 );
        CONSTANTEXP( ADR( c2325 ) );
        c2324 = CSTRING_TSCP( t2622 );
        CONSTANTEXP( ADR( c2324 ) );
        c2323 = CSTRING_TSCP( t2623 );
        CONSTANTEXP( ADR( c2323 ) );
        c2322 = CSTRING_TSCP( t2624 );
        CONSTANTEXP( ADR( c2322 ) );
        c2321 = CSTRING_TSCP( t2625 );
        CONSTANTEXP( ADR( c2321 ) );
        c2305 = CSTRING_TSCP( t2626 );
        CONSTANTEXP( ADR( c2305 ) );
        c2304 = CSTRING_TSCP( t2627 );
        CONSTANTEXP( ADR( c2304 ) );
        c2293 = CSTRING_TSCP( t2628 );
        CONSTANTEXP( ADR( c2293 ) );
        c2276 = CSTRING_TSCP( t2629 );
        CONSTANTEXP( ADR( c2276 ) );
        c2221 = CSTRING_TSCP( t2630 );
        CONSTANTEXP( ADR( c2221 ) );
        c2210 = CSTRING_TSCP( t2631 );
        CONSTANTEXP( ADR( c2210 ) );
        c2189 = CSTRING_TSCP( t2632 );
        CONSTANTEXP( ADR( c2189 ) );
        c2171 = EMPTYLIST;
        t2633 = STRINGTOSYMBOL( CSTRING_TSCP( "PEEP" ) );
        X1 = t2633;
        t2634 = CSTRING_TSCP( t2635 );
        X1 = CONS( t2634, X1 );
        c2171 = CONS( X1, c2171 );
        t2636 = STRINGTOSYMBOL( CSTRING_TSCP( "LAP" ) );
        X1 = t2636;
        t2637 = CSTRING_TSCP( t2638 );
        X1 = CONS( t2637, X1 );
        c2171 = CONS( X1, c2171 );
        t2639 = STRINGTOSYMBOL( CSTRING_TSCP( "TREE" ) );
        X1 = t2639;
        t2640 = CSTRING_TSCP( t2641 );
        X1 = CONS( t2640, X1 );
        c2171 = CONS( X1, c2171 );
        t2642 = STRINGTOSYMBOL( CSTRING_TSCP( "LAMBDA" ) );
        X1 = t2642;
        t2643 = CSTRING_TSCP( t2644 );
        X1 = CONS( t2643, X1 );
        c2171 = CONS( X1, c2171 );
        t2645 = STRINGTOSYMBOL( CSTRING_TSCP( "TRANSFORM" ) );
        X1 = t2645;
        t2646 = CSTRING_TSCP( t2647 );
        X1 = CONS( t2646, X1 );
        c2171 = CONS( X1, c2171 );
        t2648 = STRINGTOSYMBOL( CSTRING_TSCP( "CLOSED" ) );
        X1 = t2648;
        t2649 = CSTRING_TSCP( t2650 );
        X1 = CONS( t2649, X1 );
        c2171 = CONS( X1, c2171 );
        t2651 = STRINGTOSYMBOL( CSTRING_TSCP( "EXPAND" ) );
        X1 = t2651;
        t2652 = CSTRING_TSCP( t2653 );
        X1 = CONS( t2652, X1 );
        c2171 = CONS( X1, c2171 );
        t2654 = STRINGTOSYMBOL( CSTRING_TSCP( "MACRO" ) );
        X1 = t2654;
        t2655 = CSTRING_TSCP( t2656 );
        X1 = CONS( t2655, X1 );
        c2171 = CONS( X1, c2171 );
        t2657 = STRINGTOSYMBOL( CSTRING_TSCP( "SOURCE" ) );
        X1 = t2657;
        t2658 = CSTRING_TSCP( t2659 );
        X1 = CONS( t2658, X1 );
        c2171 = CONS( X1, c2171 );
        CONSTANTEXP( ADR( c2171 ) );
        c2156 = CSTRING_TSCP( t2660 );
        CONSTANTEXP( ADR( c2156 ) );
        c2150 = CSTRING_TSCP( t2661 );
        CONSTANTEXP( ADR( c2150 ) );
        c2139 = CSTRING_TSCP( t2662 );
        CONSTANTEXP( ADR( c2139 ) );
        c2100 = CSTRING_TSCP( t2663 );
        CONSTANTEXP( ADR( c2100 ) );
        c2096 = CSTRING_TSCP( t2664 );
        CONSTANTEXP( ADR( c2096 ) );
        c2095 = CSTRING_TSCP( t2665 );
        CONSTANTEXP( ADR( c2095 ) );
        c2094 = CSTRING_TSCP( t2666 );
        CONSTANTEXP( ADR( c2094 ) );
        c2093 = CSTRING_TSCP( t2667 );
        CONSTANTEXP( ADR( c2093 ) );
        c2092 = CSTRING_TSCP( t2668 );
        CONSTANTEXP( ADR( c2092 ) );
        c2089 = CSTRING_TSCP( t2669 );
        CONSTANTEXP( ADR( c2089 ) );
        c2083 = CSTRING_TSCP( t2670 );
        CONSTANTEXP( ADR( c2083 ) );
        c2074 = CSTRING_TSCP( t2671 );
        CONSTANTEXP( ADR( c2074 ) );
        c2065 = CSTRING_TSCP( t2672 );
        CONSTANTEXP( ADR( c2065 ) );
        c2061 = CSTRING_TSCP( t2673 );
        CONSTANTEXP( ADR( c2061 ) );
        c2041 = CSTRING_TSCP( t2674 );
        CONSTANTEXP( ADR( c2041 ) );
        c2015 = EMPTYLIST;
        c2015 = CONS( EMPTYSTRING, c2015 );
        CONSTANTEXP( ADR( c2015 ) );
        c2012 = CSTRING_TSCP( t2675 );
        CONSTANTEXP( ADR( c2012 ) );
        c2010 = CSTRING_TSCP( t2676 );
        CONSTANTEXP( ADR( c2010 ) );
        c2008 = CSTRING_TSCP( t2677 );
        CONSTANTEXP( ADR( c2008 ) );
        c2006 = CSTRING_TSCP( t2678 );
        CONSTANTEXP( ADR( c2006 ) );
        c2004 = CSTRING_TSCP( t2679 );
        CONSTANTEXP( ADR( c2004 ) );
        c2001 = CSTRING_TSCP( t2680 );
        CONSTANTEXP( ADR( c2001 ) );
}

DEFTSCP( main_scc_2dversion_v );
DEFCSTRING( t2681, "SCC-VERSION" );
DEFTSCP( main_force_2dld_2dof_2drep_v );
DEFCSTRING( t2682, "FORCE-LD-OF-REP" );
EXTERNTSCPP( screp_read_2deval_2dprint, XAL1( TSCP ) );
EXTERNTSCP( screp_read_2deval_2dprint_v );
DEFTSCP( main_predef_2ddefault_v );
DEFCSTRING( t2683, "PREDEF-DEFAULT" );
DEFTSCP( main_c_2dinclude_2dfile_v );
DEFCSTRING( t2684, "C-INCLUDE-FILE" );
DEFTSCP( main_c_2dinclude_2ddir_v );
DEFCSTRING( t2685, "C-INCLUDE-DIR" );
DEFTSCP( main_sc_2dlibrary_v );
DEFCSTRING( t2686, "SC-LIBRARY" );
DEFTSCP( main_sc_2dlibrary__p_v );
DEFCSTRING( t2687, "SC-LIBRARY_P" );
DEFTSCP( main_module_2dnames_v );
DEFCSTRING( t2688, "MODULE-NAMES" );
DEFTSCP( main_include_2ddirs_v );
DEFCSTRING( t2689, "INCLUDE-DIRS" );
DEFTSCP( main_scc_v );
DEFCSTRING( t2690, "SCC" );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt1_list_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_list_2dref_v );
EXTERNTSCP( sc_implementation_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
EXTERNTSCPP( scrt1_assoc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assoc_v );
EXTERNTSCPP( main_do_2dc_2dflag, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( main_do_2dc_2dflag_v );
EXTERNTSCP( screp_exit_v );
EXTERNTSCP( screp_reset_v );
EXTERNTSCPP( scrt4_catch_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt4_catch_2derror_v );
EXTERNTSCPP( scrt6_remove_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt6_remove_2dfile_v );

TSCP  main_l2318( c2858 )
        TSCP  c2858;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "main_l2318 [inside SCC]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c2858, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c2858, 1 );
        scrt6_remove_2dfile( DISPLAY( 1 ) );
        X3 = scrt6_remove_2dfile( DISPLAY( 0 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  main_l2317( c2856 )
        TSCP  c2856;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "main_l2317 [inside SCC]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c2856, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c2856, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c2856, 2 );
        X5 = MAKEPROCEDURE( 0, 
                            0, 
                            main_l2318, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        scrt4_catch_2derror( X5 );
        X5 = DISPLAY( 2 );
        X5 = UNKNOWNCALL( X5, 0 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( scrt5_open_2doutput_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2doutput_2dfile_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt5_close_2doutput_2dport, XAL1( TSCP ) );
EXTERNTSCP( scrt5_close_2doutput_2dport_v );
EXTERNTSCPP( scrt4_system, XAL1( TSCP ) );
EXTERNTSCP( scrt4_system_v );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  main_l2441( c2909 )
        TSCP  c2909;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "main_l2441 [inside SCC]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c2909, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c2909, 1 );
        scrt6_remove_2dfile( DISPLAY( 1 ) );
        X3 = scrt6_remove_2dfile( DISPLAY( 0 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  main_scc( c2018 )
        TSCP  c2018;
{
        TSCP  X21, 
              X20, 
              X19, 
              X18, 
              X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t2690 );
        X1 = c2447;
        X2 = EMPTYLIST;
        X6 = sc_implementation_v;
        X6 = UNKNOWNCALL( X6, 0 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) );
        X4 = scrt1_list_2dref( X5, _TSCP( 20 ) );
        if  ( FALSE( scrt1_equal_3f( X4, c2445 ) ) )  goto L2692;
        X3 = c2446;
        goto L2693;
L2692:
        X3 = c2276;
L2693:
        DISPLAY( 0 ) = c2443;
        DISPLAY( 1 ) = c2442;
        X4 = EMPTYLIST;
        X5 = FALSEVALUE;
        X6 = TRUEVALUE;
        X7 = FALSEVALUE;
        X8 = EMPTYLIST;
        X8 = CONS( X8, EMPTYLIST );
        X7 = CONS( X7, EMPTYLIST );
        X6 = CONS( X6, EMPTYLIST );
        X5 = CONS( X5, EMPTYLIST );
        X4 = CONS( X4, EMPTYLIST );
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        if  ( EQ( TSCPTAG( c2018 ), PAIRTAG ) )  goto L2696;
        scrt1__24__cdr_2derror( c2018 );
L2696:
        X9 = PAIR_CDR( c2018 );
        X10 = X9;
L2700:
        if  ( FALSE( X10 ) )  goto L2729;
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L2704;
        scrt1__24__car_2derror( X10 );
L2704:
        X11 = PAIR_CAR( X10 );
        X12 = scrt1_equal_3f( X11, c2041 );
        if  ( FALSE( X12 ) )  goto L2728;
        X13 = PAIR_CDR( X10 );
        if  ( FALSE( X13 ) )  goto L2728;
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2718;
        scrt1__24__cdr_2derror( X14 );
L2718:
        if  ( FALSE( PAIR_CDR( X14 ) ) )  goto L2728;
        X17 = CONS( c2305, EMPTYLIST );
        X17 = CONS( scrt1_caddr( X10 ), X17 );
        X17 = CONS( c2304, X17 );
        X18 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X18 ), PAIRTAG ) )  goto L2725;
        scrt1__24__car_2derror( X18 );
L2725:
        X17 = CONS( PAIR_CAR( X18 ), X17 );
        X16 = scrt3_string_2dappend( CONS( c2293, X17 ) );
        X15 = sc_cons( X16, PAIR_CAR( X8 ) );
        SETGEN( PAIR_CAR( X8 ), X15 );
        X10 = scrt1_cdddr( X10 );
        GOBACK( L2700 );
L2728:
        if  ( FALSE( scrt1_equal_3f( X11, c2061 ) ) )  goto L2730;
        X12 = TRUEVALUE;
        SETGEN( PAIR_CAR( X7 ), X12 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2730:
        X12 = scrt1_equal_3f( X11, c2065 );
        if  ( FALSE( X12 ) )  goto L2751;
        if  ( FALSE( PAIR_CDR( X10 ) ) )  goto L2751;
        X16 = CONS( c2276, EMPTYLIST );
        X17 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L2744;
        scrt1__24__car_2derror( X17 );
L2744:
        X15 = scrt3_string_2dappend( CONS( PAIR_CAR( X17 ), X16 ) );
        X14 = sc_cons( X15, EMPTYLIST );
        X13 = X14;
        main_include_2ddirs_v = scrt1_append_2dtwo( main_include_2ddirs_v, 
                                                    X13 );
        X13 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2749;
        scrt1__24__cdr_2derror( X13 );
L2749:
        X10 = PAIR_CDR( X13 );
        GOBACK( L2700 );
L2751:
        X12 = scrt1_equal_3f( X11, c2074 );
        if  ( FALSE( X12 ) )  goto L2768;
        if  ( FALSE( PAIR_CDR( X10 ) ) )  goto L2768;
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2762;
        scrt1__24__car_2derror( X14 );
L2762:
        X13 = PAIR_CAR( X14 );
        main_module_2dnames_v = sc_cons( X13, main_module_2dnames_v );
        X13 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2766;
        scrt1__24__cdr_2derror( X13 );
L2766:
        X10 = PAIR_CDR( X13 );
        GOBACK( L2700 );
L2768:
        X12 = scrt1_equal_3f( X11, c2083 );
        if  ( FALSE( X12 ) )  goto L2801;
        if  ( FALSE( PAIR_CDR( X10 ) ) )  goto L2801;
        X13 = CONS( c2189, EMPTYLIST );
        X13 = CONS( X3, X13 );
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2779;
        scrt1__24__car_2derror( X14 );
L2779:
        main_predef_2ddefault_v = scrt3_string_2dappend( CONS( PAIR_CAR( X14 ), 
                                                               X13 ) );
        X13 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2783;
        scrt1__24__car_2derror( X13 );
L2783:
        main_c_2dinclude_2ddir_v = PAIR_CAR( X13 );
        X13 = CONS( c2210, EMPTYLIST );
        X13 = CONS( X3, X13 );
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2787;
        scrt1__24__car_2derror( X14 );
L2787:
        main_sc_2dlibrary_v = scrt3_string_2dappend( CONS( PAIR_CAR( X14 ), 
                                                           X13 ) );
        X13 = CONS( c2221, EMPTYLIST );
        X13 = CONS( X3, X13 );
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2791;
        scrt1__24__car_2derror( X14 );
L2791:
        main_sc_2dlibrary__p_v = scrt3_string_2dappend( CONS( PAIR_CAR( X14 ), 
                                                              X13 ) );
        X13 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2795;
        scrt1__24__car_2derror( X13 );
L2795:
        main_c_2dinclude_2ddir_v = PAIR_CAR( X13 );
        X13 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2799;
        scrt1__24__cdr_2derror( X13 );
L2799:
        X10 = PAIR_CDR( X13 );
        GOBACK( L2700 );
L2801:
        if  ( FALSE( scrt1_equal_3f( X11, c2089 ) ) )  goto L2802;
        X12 = SYMBOL_VALUE( sc_2dlog_2ddefault_v );
        SETGEN( PAIR_CAR( X2 ), X12 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2802:
        X12 = scrt1_assoc( X11, c2171 );
        if  ( FALSE( X12 ) )  goto L2807;
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L2811;
        scrt1__24__cdr_2derror( X12 );
L2811:
        X14 = PAIR_CDR( X12 );
        X13 = sc_cons( X14, PAIR_CAR( X2 ) );
        SETGEN( PAIR_CAR( X2 ), X13 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2807:
        if  ( FALSE( scrt1_equal_3f( X11, c2092 ) ) )  goto L2814;
        X13 = sc_cons( c2156, PAIR_CAR( X8 ) );
        SETGEN( PAIR_CAR( X8 ), X13 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2814:
        if  ( FALSE( scrt1_equal_3f( X11, c2093 ) ) )  goto L2818;
        X13 = sc_cons( c2150, PAIR_CAR( X8 ) );
        SETGEN( PAIR_CAR( X8 ), X13 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2818:
        if  ( FALSE( scrt1_equal_3f( X11, c2094 ) ) )  goto L2822;
        X13 = FALSEVALUE;
        SETGEN( PAIR_CAR( X6 ), X13 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2822:
        if  ( FALSE( scrt1_equal_3f( X11, c2095 ) ) )  goto L2826;
        X13 = sc_cons( c2139, PAIR_CAR( X8 ) );
        SETGEN( PAIR_CAR( X8 ), X13 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2826:
        if  ( FALSE( scrt1_equal_3f( X11, c2096 ) ) )  goto L2830;
        X13 = TRUEVALUE;
        SETGEN( PAIR_CAR( X5 ), X13 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2830:
        X13 = scrt1_equal_3f( X11, c2100 );
        if  ( FALSE( X13 ) )  goto L2850;
        if  ( FALSE( PAIR_CDR( X10 ) ) )  goto L2850;
        X15 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L2844;
        scrt1__24__car_2derror( X15 );
L2844:
        X14 = PAIR_CAR( X15 );
        SETGEN( PAIR_CAR( X1 ), X14 );
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L2848;
        scrt1__24__cdr_2derror( X14 );
L2848:
        X10 = PAIR_CDR( X14 );
        GOBACK( L2700 );
L2850:
        X13 = main_do_2dc_2dflag( X11, 
                                  PAIR_CAR( X8 ), 
                                  PAIR_CAR( X2 ), 
                                  PAIR_CAR( X6 ), 
                                  PAIR_CAR( X7 ) );
        X12 = sc_cons( X13, PAIR_CAR( X4 ) );
        SETGEN( PAIR_CAR( X4 ), X12 );
        X10 = PAIR_CDR( X10 );
        GOBACK( L2700 );
L2729:
        if  ( FALSE( PAIR_CAR( X5 ) ) )  goto L2853;
        X9 = screp_exit_v;
        X9 = UNKNOWNCALL( X9, 0 );
        VIA( PROCEDURE_CODE( X9 ) )( PROCEDURE_CLOSURE( X9 ) );
L2853:
        DISPLAY( 2 ) = screp_reset_v;
        screp_reset_v = MAKEPROCEDURE( 0, 
                                       0, 
                                       main_l2317, 
                                       MAKECLOSURE( EMPTYLIST, 
                                                    3, 
                                                    DISPLAY( 1 ), 
                                                    DISPLAY( 0 ), 
                                                    DISPLAY( 2 ) ) );
        if  ( FALSE( PAIR_CAR( X7 ) ) )  goto L2860;
        X9 = scrt5_open_2doutput_2dfile( DISPLAY( 1 ) );
        X10 = CONS( main_c_2dinclude_2dfile_v, EMPTYLIST );
        X10 = CONS( main_c_2dinclude_2ddir_v, X10 );
        scrt6_format( X9, CONS( c2321, X10 ) );
        scrt6_format( X9, CONS( c2322, EMPTYLIST ) );
        scrt6_format( X9, CONS( c2323, EMPTYLIST ) );
        scrt6_format( X9, CONS( c2324, EMPTYLIST ) );
        scrt6_format( X9, CONS( c2325, EMPTYLIST ) );
        X11 = scrt1_reverse( main_module_2dnames_v );
        X10 = sc_cons( c2373, X11 );
        X11 = X10;
        X12 = EMPTYLIST;
        X13 = EMPTYLIST;
L2865:
        if  ( EQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L2873;
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L2869;
        scrt1__24__car_2derror( X11 );
L2869:
        X16 = CONS( PAIR_CAR( X11 ), EMPTYLIST );
        X15 = scrt6_format( X9, CONS( c2372, X16 ) );
        X14 = sc_cons( X15, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L2872;
        X15 = PAIR_CDR( X11 );
        X13 = X14;
        X12 = X14;
        X11 = X15;
        GOBACK( L2865 );
L2872:
        X15 = PAIR_CDR( X11 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L2877;
        scdebug_error( c2360, 
                       c2361, CONS( X13, EMPTYLIST ) );
L2877:
        X13 = SETGEN( PAIR_CDR( X13 ), X14 );
        X11 = X15;
        GOBACK( L2865 );
L2873:
        scrt6_format( X9, CONS( c2374, EMPTYLIST ) );
        scrt6_format( X9, CONS( c2375, EMPTYLIST ) );
        scrt6_format( X9, CONS( c2376, EMPTYLIST ) );
        scrt5_close_2doutput_2dport( X9 );
        X12 = sc_cons( DISPLAY( 1 ), EMPTYLIST );
        X11 = X12;
        X10 = scrt1_append_2dtwo( PAIR_CAR( X4 ), X11 );
        SETGEN( PAIR_CAR( X4 ), X10 );
L2860:
        if  ( FALSE( scrt1_member( c2427, PAIR_CAR( X4 ) ) ) )  goto L2882;
        X14 = scrt1_reverse( PAIR_CAR( X4 ) );
        goto L2883;
L2882:
        X15 = scrt1_reverse( PAIR_CAR( X4 ) );
        if  ( FALSE( scrt1_member( c2428, PAIR_CAR( X4 ) ) ) )  goto L2884;
        X17 = scrt1_cons_2a( main_sc_2dlibrary__p_v, 
                             CONS( EMPTYLIST, EMPTYLIST ) );
        goto L2885;
L2884:
        X17 = scrt1_cons_2a( main_sc_2dlibrary_v, 
                             CONS( EMPTYLIST, EMPTYLIST ) );
L2885:
        X19 = CONS( EMPTYLIST, EMPTYLIST );
        X20 = C_FIXED( STACK_OVERFLOW );
        if  ( BITAND( BITOR( _S2CINT( X20 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L2887;
        if  ( NEQ( _S2CUINT( X20 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L2889;
        X21 = c2440;
        goto L2892;
L2889:
        X21 = sc_emptystring;
        goto L2892;
L2887:
        if  ( FALSE( scrt2__3d_2dtwo( X20, _TSCP( 4 ) ) ) )  goto L2891;
        X21 = c2440;
        goto L2892;
L2891:
        X21 = sc_emptystring;
L2892:
        X18 = scrt1_cons_2a( c2429, CONS( X21, X19 ) );
        X16 = scrt1_append_2dtwo( X17, X18 );
        X14 = scrt1_append_2dtwo( X15, X16 );
L2883:
        X15 = X14;
        X16 = EMPTYLIST;
        X17 = EMPTYLIST;
L2895:
        if  ( NEQ( _S2CUINT( X15 ), _S2CUINT( EMPTYLIST ) ) )  goto L2896;
        X13 = X16;
        goto L2903;
L2896:
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L2899;
        scrt1__24__car_2derror( X15 );
L2899:
        X20 = CONS( PAIR_CAR( X15 ), EMPTYLIST );
        X19 = scrt3_string_2dappend( CONS( c2304, X20 ) );
        X18 = sc_cons( X19, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X16 ), _S2CUINT( EMPTYLIST ) ) )  goto L2902;
        X19 = PAIR_CDR( X15 );
        X17 = X18;
        X16 = X18;
        X15 = X19;
        GOBACK( L2895 );
L2902:
        X19 = PAIR_CDR( X15 );
        if  ( EQ( TSCPTAG( X17 ), PAIRTAG ) )  goto L2907;
        scdebug_error( c2360, 
                       c2361, CONS( X17, EMPTYLIST ) );
L2907:
        X17 = SETGEN( PAIR_CDR( X17 ), X18 );
        X15 = X19;
        GOBACK( L2895 );
L2903:
        X14 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X12 = CONS( scrt1_append_2dtwo( X13, X14 ), 
                    EMPTYLIST );
        X12 = CONS( main_c_2dinclude_2ddir_v, X12 );
        X11 = scrt1_cons_2a( PAIR_CAR( X1 ), 
                             CONS( c2382, X12 ) );
        X10 = sc_apply_2dtwo( scrt3_string_2dappend_v, X11 );
        X9 = scrt4_system( X10 );
        if  ( EQ( _S2CUINT( _TSCP( 0 ) ), _S2CUINT( X9 ) ) )  goto L2880;
        X9 = screp_reset_v;
        X9 = UNKNOWNCALL( X9, 0 );
        VIA( PROCEDURE_CODE( X9 ) )( PROCEDURE_CLOSURE( X9 ) );
L2880:
        X9 = MAKEPROCEDURE( 0, 
                            0, 
                            main_l2441, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = scrt4_catch_2derror( X9 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( main_do_2dc_2dflag_v );
DEFCSTRING( t2911, "DO-C-FLAG" );
EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCPP( scrt3_string_3d_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt3_string_3d_3f_v );
EXTERNTSCPP( scrt6_read, XAL1( TSCP ) );
EXTERNTSCP( scrt6_read_v );
EXTERNTSCPP( scrt5_open_2dinput_2dstring, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dstring_v );
EXTERNTSCPP( scrt5_open_2dinput_2dfile, XAL1( TSCP ) );
EXTERNTSCP( scrt5_open_2dinput_2dfile_v );
EXTERNTSCP( scrt5_stderr_2dport_v );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( scrt6_rename_2dfile, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_rename_2dfile_v );

TSCP  main_do_2dc_2dflag( a2449, 
                          f2450, l2451, s2452, i2453 )
        TSCP  a2449, f2450, l2451, s2452, i2453;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t2911 );
        if  ( AND( EQ( TSCPTAG( a2449 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a2449 ), STRINGTAG ) )
            )  goto L2914;
        scdebug_error( c2548, 
                       c2549, CONS( a2449, EMPTYLIST ) );
L2914:
        X3 = C_FIXED( STRING_LENGTH( a2449 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L2917;
        X6 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( _TSCP( 12 ) ) ) );
        goto L2918;
L2917:
        X6 = scrt2__2d_2dtwo( X3, _TSCP( 12 ) );
L2918:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L2920;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X6 ) ) )  goto L2922;
        X5 = _TSCP( 0 );
        goto L2921;
L2922:
        X5 = X6;
        goto L2921;
L2920:
        X5 = scrt2_max_2dtwo( _TSCP( 0 ), X6 );
L2921:
        X4 = scrt3_substring( a2449, _TSCP( 0 ), X5 );
        X5 = CONS( c2531, EMPTYLIST );
        X1 = scrt3_string_2dappend( CONS( X4, X5 ) );
        X5 = CONS( c2530, EMPTYLIST );
        X2 = scrt3_string_2dappend( CONS( X4, X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L2928;
        if  ( GT( _S2CINT( X3 ), _S2CINT( _TSCP( 12 ) ) ) )  goto L2932;
        POPSTACKTRACE( a2449 );
L2928:
        if  ( TRUE( scrt2__3e_2dtwo( X3, _TSCP( 12 ) ) ) )  goto L2932;
        POPSTACKTRACE( a2449 );
L2932:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L2937;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( _TSCP( 12 ) ) ) );
        goto L2938;
L2937:
        X5 = scrt2__2d_2dtwo( X3, _TSCP( 12 ) );
L2938:
        X4 = scrt3_substring( a2449, X5, X3 );
        if  ( FALSE( scrt3_string_3d_3f( X4, c2479 ) ) )  goto L2935;
        X4 = CONS( a2449, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c2481, X4 ) );
        X4 = SYMBOL_VALUE( initialize_2dcompile_v );
        X4 = UNKNOWNCALL( X4, 0 );
        VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) );
        X4 = f2450;
L2941:
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L2942;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L2946;
        scrt1__24__car_2derror( X4 );
L2946:
        X5 = PAIR_CAR( X4 );
        X7 = scrt6_read( CONS( scrt5_open_2dinput_2dstring( X5 ), 
                               EMPTYLIST ) );
        X6 = SYMBOL_VALUE( do_2ddefine_2dconstant_v );
        X6 = UNKNOWNCALL( X6, 1 );
        VIA( PROCEDURE_CODE( X6 ) )( X7, PROCEDURE_CLOSURE( X6 ) );
        X4 = PAIR_CDR( X4 );
        GOBACK( L2941 );
L2942:
        SETGENTL( SYMBOL_VALUE( sc_2dinclude_2ddirs_v ), 
                  main_include_2ddirs_v );
        X5 = scrt5_open_2dinput_2dfile( a2449 );
        X4 = sc_cons( X5, EMPTYLIST );
        SETGENTL( SYMBOL_VALUE( sc_2dinput_v ), X4 );
        SETGENTL( SYMBOL_VALUE( sc_2dsource_2dname_v ), a2449 );
        SETGENTL( SYMBOL_VALUE( sc_2dicode_v ), 
                  scrt5_open_2doutput_2dfile( X1 ) );
        SETGENTL( SYMBOL_VALUE( sc_2derror_v ), 
                  scrt5_stderr_2dport_v );
        SETGENTL( SYMBOL_VALUE( sc_2dlog_v ), l2451 );
        SETGENTL( SYMBOL_VALUE( sc_2dstack_2dtrace_v ), s2452 );
        SETGENTL( SYMBOL_VALUE( sc_2dinterpreter_v ), i2453 );
        X4 = SYMBOL_VALUE( docompile_v );
        X4 = UNKNOWNCALL( X4, 0 );
        VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) );
        X4 = SYMBOL_VALUE( sc_2derror_2dcnt_v );
        if  ( NEQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L2953;
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L2957;
        goto L2960;
L2953:
        if  ( TRUE( scrt2_zero_3f( X4 ) ) )  goto L2960;
L2957:
        X5 = screp_reset_v;
        X5 = UNKNOWNCALL( X5, 0 );
        VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
L2960:
        X4 = SYMBOL_VALUE( module_2dname_v );
        main_module_2dnames_v = sc_cons( X4, main_module_2dnames_v );
        X4 = SYMBOL_VALUE( close_2dsc_2dfiles_v );
        X4 = UNKNOWNCALL( X4, 0 );
        VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) );
        scrt6_rename_2dfile( X1, X2 );
        POPSTACKTRACE( X2 );
L2935:
        POPSTACKTRACE( a2449 );
}

void  main__init(){}
void scrt2__init();
void scdebug__init();
void scrt5__init();
void scrt6__init();
void scrt4__init();
void scrt3__init();
void scrt1__init();
void screp__init();
void callcode__init();
void closeana__init();
void compile__init();
void expform__init();
void gencode__init();
void lambdacode__init();
void lambdaexp__init();
void lap__init();
void macros__init();
void misccode__init();
void miscexp__init();
void plist__init();
void readtext__init();
void transform__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt2__init();
        scdebug__init();
        scrt5__init();
        scrt6__init();
        scrt4__init();
        scrt3__init();
        scrt1__init();
        screp__init();
        callcode__init();
        closeana__init();
        compile__init();
        expform__init();
        gencode__init();
        lambdacode__init();
        lambdaexp__init();
        lap__init();
        macros__init();
        misccode__init();
        miscexp__init();
        plist__init();
        readtext__init();
        transform__init();
        MAXDISPLAY( 3 );
}

int main( int argc, char **argv )
{
        static int  init = 0;
        if  (init)  return 1;
        init = 1;
        INITHEAP( 0, argc, argv, main_scc );
        init_constants();
        init_modules( "(main SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t2681, 
                       ADR( main_scc_2dversion_v ), c2001 );
        INITIALIZEVAR( t2682, 
                       ADR( main_force_2dld_2dof_2drep_v ), 
                       screp_read_2deval_2dprint_v );
        INITIALIZEVAR( t2683, 
                       ADR( main_predef_2ddefault_v ), c2004 );
        INITIALIZEVAR( t2684, 
                       ADR( main_c_2dinclude_2dfile_v ), c2006 );
        INITIALIZEVAR( t2685, 
                       ADR( main_c_2dinclude_2ddir_v ), c2008 );
        INITIALIZEVAR( t2686, 
                       ADR( main_sc_2dlibrary_v ), c2010 );
        INITIALIZEVAR( t2687, 
                       ADR( main_sc_2dlibrary__p_v ), c2012 );
        INITIALIZEVAR( t2688, 
                       ADR( main_module_2dnames_v ), EMPTYLIST );
        INITIALIZEVAR( t2689, 
                       ADR( main_include_2ddirs_v ), c2015 );
        INITIALIZEVAR( t2690, 
                       ADR( main_scc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, main_scc, EMPTYLIST ) );
        INITIALIZEVAR( t2911, 
                       ADR( main_do_2dc_2dflag_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      main_do_2dc_2dflag, EMPTYLIST ) );
        main_scc( CLARGUMENTS( argc, argv ) );
        SCHEMEEXIT();
        return 0;
}
