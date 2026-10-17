; undefined FUN_080013b0(void)
; entry 0x80013b0  size 40 bytes

080013B0: 00b5         push {lr}
080013B2: 094b         ldr r3,[0x080013d8]
080013B4: 094a         ldr r2,[0x080013dc]
080013B6: 9918         add r1,r3,r2
080013B8: 0a68         ldr r2,[r1,#0x0]
080013BA: 5100         lsl r1,r2,#0x1
080013BC: 8918         add r1,r1,r2
080013BE: c900         lsl r1,r1,#0x3
080013C0: 074a         ldr r2,[0x080013e0]
080013C2: 9b18         add r3,r3,r2
080013C4: c918         add r1,r1,r3
080013C6: 0122         mov r2,#0x1
080013C8: 4a70         strb r2,[r1,#0x1]
080013CA: 4860         str r0,[r1,#0x4]
080013CC: 0548         ldr r0,[0x080013e4]
080013CE: 0068         ldr r0,[r0,#0x0]
080013D0: fef7aaff     bl 0x08000328
080013D4: 01bc         pop {r0}
080013D6: 0047         bx r0
