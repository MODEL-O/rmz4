// undefined FUN_0810b57c(void)
// entry 0x810b57c


undefined4 FUN_0810b57c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((((*(char *)(iVar3 + 2) == '\0') || (bVar1 = *(byte *)(iVar3 + 3), bVar1 < 3)) ||
      (*(char *)(iVar3 + DAT_0810b5a8) == '\0')) ||
     (((iVar4 = DAT_0810b5ac, bVar1 != 3 && (iVar4 = DAT_0810b5c0, bVar1 != 4)) &&
      (iVar4 = DAT_0810b5fc, bVar1 != 5)))) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    uVar2 = iVar4 + (uint)*(byte *)(iVar3 + 0xdd3);
    if (*(char *)(param_1 + 0xd) == '\0') {
      FUN_0801cf00(param_1,uVar2);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != uVar2) {
      FUN_0801cf00(param_1,uVar2);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


