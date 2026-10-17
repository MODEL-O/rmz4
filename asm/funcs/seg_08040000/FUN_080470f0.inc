@ FUN_080470f0  entry 0x080470f0  size 20
.thumb
.org 0x470f0
FUN_080470f0:
	push {lr}	@ 000470f0 00b5
.org 0x470f2
	ldr r2, [pc, #16]	@ 000470f2 044a
.org 0x470f4
	ldrb r1, [r0, #16]	@ 000470f4 017c
.org 0x470f6
	lsls r1, r1, #2	@ 000470f6 8900
.org 0x470f8
	adds r1, r1, r2	@ 000470f8 8918
.org 0x470fa
	ldr r1, [r1, #0]	@ 000470fa 0968
.org 0x470fc
	bl 0x128f80	@ 000470fc e1f040ff
.org 0x47100
	pop {r0}	@ 00047100 01bc
.org 0x47102
	bx r0	@ 00047102 0047
