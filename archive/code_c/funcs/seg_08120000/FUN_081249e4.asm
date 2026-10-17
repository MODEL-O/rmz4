; undefined FUN_081249e4(void)
; entry 0x81249e4  size 40 bytes

081249E4: 00b5         push {lr}
081249E6: 011c         add r1,r0,#0x0
081249E8: 0622         mov r2,#0x6
081249EA: 885e         ldrsh r0,[r1,r2]
081249EC: 0028         cmp r0,#0x0
081249EE: 0ad0         beq 0x08124a06
081249F0: 064a         ldr r2,[0x08124a0c]
081249F2: 8818         add r0,r1,r2
081249F4: 0649         ldr r1,[0x08124a10]
081249F6: 0269         ldr r2,[r0,#0x10]
081249F8: 486a         ldr r0,[r1,#0x24]
081249FA: 8242         cmp r2,r0
081249FC: 03d9         bls 0x08124a06
081249FE: 0220         mov r0,#0x2
08124A00: 111c         add r1,r2,#0x0
08124A02: e2f633f8     bl 0x08006a6c
08124A06: 0020         mov r0,#0x0
08124A08: 02bc         pop {r1}
08124A0A: 0847         bx r1
