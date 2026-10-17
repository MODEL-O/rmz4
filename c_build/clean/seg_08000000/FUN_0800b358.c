// undefined FUN_0800b358(void)
// entry 0x800b358


void FUN_0800b358(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x14;
  local_1c = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38) >> 8) + *(int *)(param_1 + 0x50);
  local_20 = (*(int *)(param_1 + 0x68) >> 4) +
             (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34) >> 8) + *(int *)(param_1 + 0x4c);
  uVar2 = (local_20 -
          ((*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x3c) >> 8) + *(int *)(param_1 + 0x54))) +
          0xf;
  uVar3 = (local_1c -
          ((*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) >> 8) + *(int *)(param_1 + 0x58))) +
          0xf;
  local_20 = (*(int *)(param_1 + 0x2c) >> 8) + local_20;
  local_1c = (*(int *)(param_1 + 0x30) >> 8) + local_1c;
  if (*(short *)(param_1 + 0xc) == 0) {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (*(short *)(DAT_0800b440 + 0x2c000) == 0)) {
      FUN_08005124(iVar1,&local_20,DAT_0800b440 + DAT_0800b488,DAT_0800b440 + 0x7e0);
    }
    else {
      FUN_08004f80(iVar1,&local_20,DAT_0800b444,DAT_0800b444 + DAT_0800b448);
    }
    *(undefined2 *)(DAT_0800b48c + 0x2c000) = 0;
  }
  else if ((uVar2 < 0x1f) && (uVar3 < 0x1f)) {
    FUN_08003620(iVar1,&local_20,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800b414) & 0x1f00) * 8 +
                 0x6000000);
  }
  else {
    FUN_08003fe0(iVar1,&local_20,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800b3ec) & 0x1f00) * 8 +
                 0x6000000);
  }
  FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + DAT_0800b490);
  return;
}


