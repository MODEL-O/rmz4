; undefined FUN_08089294(void)
; entry 0x8089294  size 20 bytes

08089294: 00b5         push {lr}
08089296: 044a         ldr r2,[0x080892a8]
08089298: 417b         ldrb r1,[r0,#0xd]
0808929A: 8900         lsl r1,r1,#0x2
0808929C: 8918         add r1,r1,r2
0808929E: 0968         ldr r1,[r1,#0x0]
080892A0: 9ff06efe     bl 0x08128f80
080892A4: 01bc         pop {r0}
080892A6: 0047         bx r0
