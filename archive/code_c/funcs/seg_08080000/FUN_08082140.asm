; undefined FUN_08082140(void)
; entry 0x8082140  size 24 bytes

08082140: 00b5         push {lr}
08082142: 84f76dff     bl 0x08007020
08082146: 0022         mov r2,#0x0
08082148: 0f21         mov r1,#0xf
0808214A: 0140         and r1,r0
0808214C: 0129         cmp r1,#0x1
0808214E: 00d1         bne 0x08082152
08082150: 0122         mov r2,#0x1
08082152: 101c         add r0,r2,#0x0
08082154: 02bc         pop {r1}
08082156: 0847         bx r1
