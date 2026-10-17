// undefined FUN_0810b04c(void)
// entry 0x810b04c


undefined4 FUN_0810b04c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(iVar3 + 1) < 2) || (*(char *)(iVar3 + 2) == '\0')) ||
     (*(char *)(iVar3 + 3) == '\0')) {
LAB_0810b072:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  bVar1 = *(byte *)(iVar3 + DAT_0810b07c + (uint)*(byte *)(param_1 + 0x11));
  uVar5 = (uint)bVar1;
  if (uVar5 == 0xff) goto LAB_0810b072;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (((int)(uint)*(byte *)(*DAT_0810b0a8 + (uint)(bVar1 >> 2)) >> (uVar5 & 3) + 4 & 1U) == 0) {
    cVar2 = FUN_0811d8f4(uVar5);
    uVar4 = DAT_0810b0c4;
    if (cVar2 == '\0') {
      FUN_0801cf00(param_1,DAT_0810b0dc);
      goto LAB_0810b0d0;
    }
  }
  else {
    uVar4 = 0x4300;
  }
  FUN_0801cf00(param_1,uVar4);
LAB_0810b0d0:
  FUN_0801cff0(param_1);
  return in_lr;
}


