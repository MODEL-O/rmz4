; undefined FUN_081088f4(void)
; entry 0x81088f4  size 20 bytes

081088F4: 00b5         push {lr}
081088F6: fff6c1f9     bl 0x08007c7c
081088FA: 0004         lsl r0,r0,#0x10
081088FC: 000c         lsr r0,r0,#0x10
081088FE: 0f28         cmp r0,#0xf
08108900: 00d1         bne 0x08108904
08108902: 0020         mov r0,#0x0
08108904: 02bc         pop {r1}
08108906: 0847         bx r1
