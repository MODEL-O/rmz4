// undefined FUN_0800b4ac(void)
// entry 0x800b4ac


void FUN_0800b4ac(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  iVar3 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar7 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar5 = (ushort *)(uVar7 * 2 + 0x02000a04);
    *puVar5 = (ushort)0x0000fffc & *puVar5 | 2;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(uVar7 * 4 + iVar3 + 8) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(*(int *)(0x0202f610 + 0x000063a8) + 0x54);
  if (0x0000059f < *(int *)(param_1 + 0x34)) {
    if (0x00095fff < iVar3) {
      iVar2 = 0x000b8800;
      if ((0x000d1fff < iVar3) && (iVar2 = 0x000f2800, 0x0010dfff < iVar3)) goto LAB_0800b566;
      goto joined_r0x0800b556;
    }
    if ((*(int *)(param_1 + 0x34) <= 0x0000068f) || (iVar2 = 0x7e800, 0x7e800 < iVar3)) {
      iVar3 = 0;
      *(undefined2 *)(param_1 + 0x12) = 0;
      goto LAB_0800b566;
    }
  }
  else {
    iVar2 = 0x56800;
joined_r0x0800b556:
    if (iVar2 < iVar3) {
      iVar3 = 0;
      goto LAB_0800b566;
    }
  }
  iVar3 = iVar2 - iVar3;
LAB_0800b566:
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 < 0x1001) {
    sVar1 = *(short *)(param_1 + 0x12);
    if ((sVar1 != 0) &&
       ((*(short *)(param_1 + 0x12) = sVar1 + 9, (ushort)(sVar1 - 0x77U) < 0x10 ||
        (0xff < (ushort)(sVar1 + 9U))))) {
      *(undefined2 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    *(ushort *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 3U & 0xff;
  }
  iVar2 = *(int *)(param_1 + 0x6c) +
          ((int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + 0x0812930c) >> 2);
  *(int *)(param_1 + 0x6c) = iVar2;
  iVar6 = *(int *)(param_1 + 0x68);
  iVar4 = iVar2 - iVar6;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (0xa00 < iVar3) {
    if (iVar4 < 0) {
      iVar2 = iVar6 + 0xfffff600;
    }
    else {
      iVar2 = iVar6 + 0xa00;
    }
  }
  *(int *)(param_1 + 0x68) = iVar2;
  return;
}


