// undefined FUN_0809e77c(void)
// entry 0x809e77c


undefined4 FUN_0809e77c(int param_1)

{
  short sVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x204) == 0) &&
      (puVar2 = (uint *)(param_1 + 0xbc), *puVar2 < 0x10f)) &&
     (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar1 == 0)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809e7e0));
    }
    else {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809e850));
    }
    if ((0x78 < *puVar2) && (uVar4 = FUN_0801fb14(DAT_0809e854,param_1 + 0x54), 0x4000 < uVar4)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809e858);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
    *puVar2 = *puVar2 + 1;
    return in_lr;
  }
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809e7c4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  FUN_0809e85c(param_1);
  return in_lr;
}


