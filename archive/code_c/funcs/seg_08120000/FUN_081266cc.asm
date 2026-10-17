; undefined FUN_081266cc(void)
; entry 0x81266cc  size 40 bytes

081266CC: 00b5         push {lr}
081266CE: 011c         add r1,r0,#0x0
081266D0: 0622         mov r2,#0x6
081266D2: 885e         ldrsh r0,[r1,r2]
081266D4: 0028         cmp r0,#0x0
081266D6: 0ad0         beq 0x081266ee
081266D8: 064a         ldr r2,[0x081266f4]
081266DA: 8818         add r0,r1,r2
081266DC: 0649         ldr r1,[0x081266f8]
081266DE: 0269         ldr r2,[r0,#0x10]
081266E0: 486b         ldr r0,[r1,#0x34]
081266E2: 8242         cmp r2,r0
081266E4: 03d9         bls 0x081266ee
081266E6: 0620         mov r0,#0x6
081266E8: 111c         add r1,r2,#0x0
081266EA: e0f6bff9     bl 0x08006a6c
081266EE: 0020         mov r0,#0x0
081266F0: 02bc         pop {r1}
081266F2: 0847         bx r1
