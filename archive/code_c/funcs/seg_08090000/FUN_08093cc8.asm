; undefined FUN_08093cc8(void)
; entry 0x8093cc8  size 20 bytes

08093CC8: 00b5         push {lr}
08093CCA: 044a         ldr r2,[0x08093cdc]
08093CCC: 817b         ldrb r1,[r0,#0xe]
08093CCE: 8900         lsl r1,r1,#0x2
08093CD0: 8918         add r1,r1,r2
08093CD2: 0968         ldr r1,[r1,#0x0]
08093CD4: 95f054f9     bl 0x08128f80
08093CD8: 01bc         pop {r0}
08093CDA: 0047         bx r0
