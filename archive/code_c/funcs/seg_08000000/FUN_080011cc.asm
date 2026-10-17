; undefined FUN_080011cc(void)
; entry 0x80011cc  size 38 bytes

080011CC: 00b5         push {lr}
080011CE: 094b         ldr r3,[0x080011f4]
080011D0: 191c         add r1,r3,#0x0
080011D2: 0839         sub r1,#0x8
080011D4: 0022         mov r2,#0x0
080011D6: 0a60         str r2,[r1,#0x0]
080011D8: 191f         sub r1,r3,#0x4
080011DA: 0860         str r0,[r1,#0x0]
080011DC: 0648         ldr r0,[0x080011f8]
080011DE: 0260         str r2,[r0,#0x0]
080011E0: 0121         mov r1,#0x1
080011E2: 0220         mov r0,#0x2
080011E4: 1970         strb r1,[r3,#0x0]
080011E6: 0138         sub r0,#0x1
080011E8: 1833         add r3,#0x18
080011EA: 0028         cmp r0,#0x0
080011EC: fada         bge 0x080011e4
080011EE: 01bc         pop {r0}
080011F0: 0047         bx r0
