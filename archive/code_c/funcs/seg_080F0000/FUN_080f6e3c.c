// undefined FUN_080f6e3c(void)
// entry 0x80f6e3c


undefined4 FUN_080f6e3c(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f6e7c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  pcVar2 = (char *)(param_1 + 0xb5);
  *pcVar2 = '\0';
  iVar5 = 0x1200;
  iVar3 = *(int *)(param_1 + 0x28);
  for (uVar4 = 0; (int)uVar4 < 2; uVar4 = uVar4 + 1) {
    local_24 = *(int *)(iVar3 + 0x54) + iVar5;
    local_20 = *(int *)(iVar3 + 0x58) + DAT_080f6ecc;
    local_1c = iVar3;
    iVar3 = FUN_080f6db8(param_1,&local_24,uVar4 & 0xff);
    if (iVar3 == 0) break;
    *pcVar2 = *pcVar2 + '\x01';
    iVar5 = iVar5 + DAT_080f6ec8;
    iVar3 = local_1c;
  }
  FUN_080f6f50(param_1);
  return in_lr;
}


