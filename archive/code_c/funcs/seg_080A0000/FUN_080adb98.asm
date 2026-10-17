; undefined FUN_080adb98(void)
; entry 0x80adb98  size 46 bytes

080ADB98: 00b5         push {lr}
080ADB9A: 021c         add r2,r0,#0x0
080ADB9C: 0a48         ldr r0,[0x080adbc8]
080ADB9E: 0368         ldr r3,[r0,#0x0]
080ADBA0: 586d         ldr r0,[r3,#0x54]
080ADBA2: 516d         ldr r1,[r2,#0x54]
080ADBA4: 401a         sub r0,r0,r1
080ADBA6: 926d         ldr r2,[r2,#0x58]
080ADBA8: f021         mov r1,#0xf0
080ADBAA: 0901         lsl r1,r1,#0x4
080ADBAC: 5218         add r2,r2,r1
080ADBAE: 996d         ldr r1,[r3,#0x58]
080ADBB0: 891a         sub r1,r1,r2
080ADBB2: 0002         lsl r0,r0,#0x8
080ADBB4: 0014         asr r0,r0,#0x10
080ADBB6: 0902         lsl r1,r1,#0x8
080ADBB8: 0914         asr r1,r1,#0x10
080ADBBA: 7bf00ff8     bl 0x08128bdc
080ADBBE: 0004         lsl r0,r0,#0x10
080ADBC0: 000e         lsr r0,r0,#0x18
080ADBC2: 02bc         pop {r1}
080ADBC4: 0847         bx r1
