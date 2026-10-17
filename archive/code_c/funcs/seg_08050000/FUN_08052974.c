// undefined FUN_08052974(void)
// entry 0x8052974


undefined4 FUN_08052974(int param_1)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080529b4);
    FUN_08002b10(0xec);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = DAT_080529e0;
      uVar4 = 0x40;
    }
    else {
      uVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0x100;
      uVar4 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    if ((*(byte *)(*DAT_080529e4 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x4c0;
      uVar4 = 0x800;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = DAT_080529e8;
      uVar4 = DAT_080529ec;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    FUN_08005784(param_1 + 0x74,DAT_08052bb0);
    iVar2 = DAT_08052bb8;
    puVar1 = DAT_08052bb4;
    iVar6 = *(int *)(param_1 + 0x54);
    uVar5 = DAT_08052bb8 * *DAT_08052bb4 + DAT_08052bbc;
    *DAT_08052bb4 = uVar5 & 0x7fffffff;
    local_24 = iVar6 + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      local_20 = FUN_08008534(iVar6,*(undefined4 *)(param_1 + 0x58));
      iVar6 = DAT_08052cd0;
      uVar5 = iVar2 * *puVar1 + DAT_08052cd4;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052cd4;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052cd4;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6 + 0x70,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052cd4;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6 + 0x70,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052cd4;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6 + 0x8c,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052cd4;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6 + 0x8c,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
    }
    else {
      local_20 = FUN_08008748(iVar6,*(undefined4 *)(param_1 + 0x58));
      iVar6 = DAT_08052bc0;
      uVar5 = iVar2 * *puVar1 + DAT_08052bbc;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052bbc;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      uVar5 = iVar2 * (uVar5 & 0x7fffffff) + DAT_08052bbc;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052bbc;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      uVar5 = iVar2 * (uVar5 & 0x7fffffff) + DAT_08052bbc;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052bbc;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      iVar6 = iVar6 + 0x1c;
      uVar5 = iVar2 * (uVar5 & 0x7fffffff) + DAT_08052bbc;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052bbc;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      uVar5 = iVar2 * (uVar5 & 0x7fffffff) + DAT_08052bbc;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar5 = iVar2 * *puVar1 + DAT_08052bbc;
      local_24 = *(int *)(param_1 + 0x54) + 0x1000 + ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      uVar5 = iVar2 * (uVar5 & 0x7fffffff) + DAT_08052bbc;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d4c8c(&local_24,iVar6,0,((uVar5 & 0x7fffffff) >> 0x10 & 1) << 4);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0x1b;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


