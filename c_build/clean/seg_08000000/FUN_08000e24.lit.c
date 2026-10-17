// undefined FUN_08000e24(void)
// entry 0x8000e24


void FUN_08000e24(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  puVar1 = 0x040000b8;
  (*(uint *)0x040000b8) = 0;
  puVar2 = 0x040000b0;
  uVar4 = *(uint *)(0x03001590 + 0x170);
  if (uVar4 != 0) {
    uVar6 = *(uint *)(0x03001590 + 0x168);
    uVar5 = *(uint *)(0x03001590 + 0x16c);
    (*(uint *)0x040000b0) = uVar6;
    puVar2[1] = uVar5;
    *puVar1 = 0xcdffffff & uVar4;
    puVar1 = 0x040000b0;
    if ((uVar4 & 0x4000000) == 0) {
      iVar3 = (0x0000ffff & uVar4) << 1;
    }
    else {
      iVar3 = (0x0000ffff & uVar4) << 2;
    }
    if ((uVar4 & 0x600000) == 0) {
      uVar5 = uVar5 + iVar3;
    }
    if ((uVar4 & 0x600000) == 0x200000) {
      uVar5 = uVar5 - iVar3;
    }
    if ((uVar4 & 0x1800000) == 0) {
      uVar6 = uVar6 + iVar3;
    }
    if ((uVar4 & 0x1800000) == 0x800000) {
      uVar6 = uVar6 - iVar3;
    }
    if ((int)(*(uint *)0x040000b0) < 0) {
      do {
      } while (((*(uint *)0x040000b0) & 0x80000000) != 0);
    }
    (*(uint *)0x040000b0) = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uVar4;
  }
  return;
}


