; undefined FUN_08006f50(void)
; entry 0x8006f50  size 58 bytes

08006F50: 00b5         push {lr}
08006F52: 0313         asr r3,r0,#0xc
08006F54: 0a13         asr r2,r1,#0xc
08006F56: ee20         mov r0,#0xee
08006F58: c000         lsl r0,r0,#0x3
08006F5A: 8342         cmp r3,r0
08006F5C: 04d8         bhi 0x08006f68
08006F5E: 002a         cmp r2,#0x0
08006F60: 02db         blt 0x08006f68
08006F62: 0348         ldr r0,[0x08006f70]
08006F64: 8242         cmp r2,r0
08006F66: 05dd         ble 0x08006f74
08006F68: 0120         mov r0,#0x1
08006F6A: 4042         rsb r0,r0
08006F6C: 0ee0         b 0x08006f8c
08006F74: 0649         ldr r1,[0x08006f90]
08006F76: fc20         mov r0,#0xfc
08006F78: c000         lsl r0,r0,#0x3
08006F7A: 0918         add r1,r1,r0
08006F7C: 0888         ldrh r0,[r1,#0x0]
08006F7E: 5043         mul r0,r2
08006F80: c018         add r0,r0,r3
08006F82: 0230         add r0,#0x2
08006F84: 4000         lsl r0,r0,#0x1
08006F86: 4018         add r0,r0,r1
08006F88: 0021         mov r1,#0x0
08006F8A: 405e         ldrsh r0,[r0,r1]
08006F8C: 02bc         pop {r1}
08006F8E: 0847         bx r1
