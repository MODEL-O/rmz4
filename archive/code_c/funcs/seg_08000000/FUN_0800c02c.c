// undefined FUN_0800c02c(void)
// entry 0x800c02c


undefined4 FUN_0800c02c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x14;
  local_20 = (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34) >> 8) + *(int *)(param_1 + 0x4c);
  local_1c = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38) >> 8) + *(int *)(param_1 + 0x50);
  uVar2 = (local_20 -
          ((*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x3c) >> 8) + *(int *)(param_1 + 0x54))) +
          0xf;
  uVar3 = (local_1c -
          ((*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) >> 8) + *(int *)(param_1 + 0x58))) +
          0xf;
  local_20 = (*(int *)(param_1 + 0x2c) >> 8) + local_20;
  local_1c = (*(int *)(param_1 + 0x30) >> 8) + local_1c;
  if (DAT_0800c0cc < *(int *)(param_1 + 0x34)) {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (*(char *)(DAT_0800c148 + DAT_0800c14c) == '\0')) {
      FUN_08003620(iVar1,&local_20,
                   (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800c19c) & 0x1f00) * 8 +
                   0x6000000);
    }
    else {
      FUN_08003fe0(iVar1,&local_20,
                   (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800c150) & 0x1f00) * 8 +
                   0x6000000);
    }
  }
  else if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (*(char *)(DAT_0800c0d0 + DAT_0800c0d4) == '\0')) {
    FUN_08005124(iVar1,&local_20,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800c10c) & 0x1f00) * 8 +
                 0x6000000,DAT_0800c0d0 + 0x7e0);
  }
  else {
    FUN_08005050(iVar1,&local_20,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800c0d8) & 0x1f00) * 8 +
                 0x6000000,DAT_0800c0dc);
  }
  *(undefined1 *)(DAT_0800c1a0 + DAT_0800c1a4) = 0;
  FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + DAT_0800c1a8);
  return in_lr;
}


