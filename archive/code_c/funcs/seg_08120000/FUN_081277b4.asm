; undefined FUN_081277b4(void)
; entry 0x81277b4  size 36 bytes

081277B4: 00b5         push {lr}
081277B6: 0004         lsl r0,r0,#0x10
081277B8: 074a         ldr r2,[0x081277d8]
081277BA: 0849         ldr r1,[0x081277dc]
081277BC: 400b         lsr r0,r0,#0xd
081277BE: 4018         add r0,r0,r1
081277C0: 8388         ldrh r3,[r0,#0x4]
081277C2: 5900         lsl r1,r3,#0x1
081277C4: c918         add r1,r1,r3
081277C6: 8900         lsl r1,r1,#0x2
081277C8: 8918         add r1,r1,r2
081277CA: 0a68         ldr r2,[r1,#0x0]
081277CC: 0168         ldr r1,[r0,#0x0]
081277CE: 101c         add r0,r2,#0x0
081277D0: 00f066fb     bl 0x08127ea0
081277D4: 01bc         pop {r0}
081277D6: 0047         bx r0
