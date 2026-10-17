; undefined FUN_0808fb98(void)
; entry 0x808fb98  size 60 bytes

0808FB98: f0b5         push {r4,r5,r6,r7,lr}
0808FB9A: 82b0         sub sp,#0x8
0808FB9C: 817a         ldrb r1,[r0,#0xa]
0808FB9E: 0909         lsr r1,r1,#0x4
0808FBA0: 0122         mov r2,#0x1
0808FBA2: 1140         and r1,r2
0808FBA4: 426d         ldr r2,[r0,#0x54]
0808FBA6: 0092         str r2,[sp,#0x0]
0808FBA8: 806d         ldr r0,[r0,#0x58]
0808FBAA: 0190         str r0,[sp,#0x4]
0808FBAC: 0801         lsl r0,r1,#0x4
0808FBAE: 0143         orr r1,r0
0808FBB0: 0e06         lsl r6,r1,#0x18
0808FBB2: 1c24         mov r4,#0x1c
0808FBB4: 074f         ldr r7,[0x0808fbd4]
0808FBB6: 0125         mov r5,#0x1
0808FBB8: e119         add r1,r4,r7
0808FBBA: 6846         mov r0,sp
0808FBBC: 0022         mov r2,#0x0
0808FBBE: 330e         lsr r3,r6,#0x18
0808FBC0: 45f064f8     bl 0x080d4c8c
0808FBC4: 1c34         add r4,#0x1c
0808FBC6: 013d         sub r5,#0x1
0808FBC8: 002d         cmp r5,#0x0
0808FBCA: f5da         bge 0x0808fbb8
0808FBCC: 02b0         add sp,#0x8
0808FBCE: f0bc         pop {r4,r5,r6,r7}
0808FBD0: 01bc         pop {r0}
0808FBD2: 0047         bx r0
