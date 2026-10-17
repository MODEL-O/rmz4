; undefined FUN_080ea2fc(void)
; entry 0x80ea2fc  size 20 bytes

080EA2FC: 00b5         push {lr}
080EA2FE: 044a         ldr r2,[0x080ea310]
080EA300: 417b         ldrb r1,[r0,#0xd]
080EA302: 8900         lsl r1,r1,#0x2
080EA304: 8918         add r1,r1,r2
080EA306: 0968         ldr r1,[r1,#0x0]
080EA308: 3ef03afe     bl 0x08128f80
080EA30C: 01bc         pop {r0}
080EA30E: 0047         bx r0
