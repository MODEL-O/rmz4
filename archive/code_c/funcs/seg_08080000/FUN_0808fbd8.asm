; undefined FUN_0808fbd8(void)
; entry 0x808fbd8  size 60 bytes

0808FBD8: f0b5         push {r4,r5,r6,r7,lr}
0808FBDA: 82b0         sub sp,#0x8
0808FBDC: 817a         ldrb r1,[r0,#0xa]
0808FBDE: 0909         lsr r1,r1,#0x4
0808FBE0: 0122         mov r2,#0x1
0808FBE2: 1140         and r1,r2
0808FBE4: 426d         ldr r2,[r0,#0x54]
0808FBE6: 0092         str r2,[sp,#0x0]
0808FBE8: 806d         ldr r0,[r0,#0x58]
0808FBEA: 0190         str r0,[sp,#0x4]
0808FBEC: 0801         lsl r0,r1,#0x4
0808FBEE: 0143         orr r1,r0
0808FBF0: 0e06         lsl r6,r1,#0x18
0808FBF2: 0025         mov r5,#0x0
0808FBF4: 074f         ldr r7,[0x0808fc14]
0808FBF6: 0224         mov r4,#0x2
0808FBF8: e919         add r1,r5,r7
0808FBFA: 6846         mov r0,sp
0808FBFC: 0022         mov r2,#0x0
0808FBFE: 330e         lsr r3,r6,#0x18
0808FC00: 45f044f8     bl 0x080d4c8c
0808FC04: 1c35         add r5,#0x1c
0808FC06: 013c         sub r4,#0x1
0808FC08: 002c         cmp r4,#0x0
0808FC0A: f5da         bge 0x0808fbf8
0808FC0C: 02b0         add sp,#0x8
0808FC0E: f0bc         pop {r4,r5,r6,r7}
0808FC10: 01bc         pop {r0}
0808FC12: 0047         bx r0
