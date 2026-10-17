// undefined FUN_08000edc(void)
// entry 0x8000edc


void FUN_08000edc(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uVar3 = 4;
  (*(int *)0x04000004) = (ushort)0x0000ffef & (*(int *)0x04000004);
  iVar1 = 0x03001590;
  *(undefined4 *)(0x03001590 + 4) = 0x08000d21;
  (*(int *)0x04000200) = (ushort)0x0000fffd & (*(int *)0x04000200);
  if (*(uint *)(iVar1 + 0x188) != 0) {
    *(undefined4 *)(iVar1 + 0x18c) = *(undefined4 *)(iVar1 + 0x180);
    *(ushort *)(iVar1 + 0x19c) = (ushort)((*(uint *)(iVar1 + 0x188) & 0x1000000) == 0);
    *(undefined2 *)(iVar1 + 0x19e) = 1;
    *(short *)(iVar1 + 0x1a0) = (short)*(uint *)(iVar1 + 0x188);
    if ((*(uint *)(iVar1 + 0x188) & 0xffff) != 1) {
      uVar3 = 0;
    }
    uVar3 = uVar3 * 0x10000 + 0x10000 >> 0x10;
  }
  sVar2 = (short)uVar3;
  if (*(uint *)(iVar1 + 0x1ac) != 0) {
    *(undefined4 *)(iVar1 + 0x1b0) = *(undefined4 *)(iVar1 + 0x1a4);
    *(ushort *)(iVar1 + 0x1c0) = (ushort)((*(uint *)(iVar1 + 0x1ac) & 0x1000000) == 0);
    *(undefined2 *)(iVar1 + 0x1c2) = 1;
    *(short *)(iVar1 + 0x1c4) = (short)*(uint *)(iVar1 + 0x1ac);
    if ((*(uint *)(iVar1 + 0x1ac) & 0xffff) != 1) {
      uVar3 = uVar3 & 3;
    }
    sVar2 = (short)(uVar3 * 0x10000 + 0x20000 >> 0x10);
  }
  if (((int)sVar2 & 3U) != 0) {
    (*(int *)0x04000004) = (*(int *)0x04000004) | 0x10;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(sVar2 * 4 + 0x0882afa8);
    (*(int *)0x04000200) = (*(int *)0x04000200) | 2;
  }
  return;
}


