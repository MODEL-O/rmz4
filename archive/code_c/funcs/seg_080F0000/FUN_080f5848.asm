; undefined FUN_080f5848(void)
; entry 0x80f5848  size 42 bytes

080F5848: 00b5         push {lr}
080F584A: 0b68         ldr r3,[r1,#0x0]
080F584C: 0268         ldr r2,[r0,#0x0]
080F584E: 9b1a         sub r3,r3,r2
080F5850: 1b11         asr r3,r3,#0x4
080F5852: 4968         ldr r1,[r1,#0x4]
080F5854: 4068         ldr r0,[r0,#0x4]
080F5856: 091a         sub r1,r1,r0
080F5858: 0911         asr r1,r1,#0x4
080F585A: 181c         add r0,r3,#0x0
080F585C: 5843         mul r0,r3
080F585E: 0a1c         add r2,r1,#0x0
080F5860: 4a43         mul r2,r1
080F5862: 111c         add r1,r2,#0x0
080F5864: 4018         add r0,r0,r1
080F5866: 33f0c5f9     bl 0x08128bf4
080F586A: 0004         lsl r0,r0,#0x10
080F586C: 000c         lsr r0,r0,#0x10
080F586E: 02bc         pop {r1}
080F5870: 0847         bx r1
