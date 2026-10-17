// undefined FUN_081023fc(void)
// entry 0x81023fc


undefined4 FUN_081023fc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(param_1 + 0xc0));
    uVar4 = *DAT_08102484 * DAT_08102488 + DAT_0810248c;
    *DAT_08102484 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 >> 0x10) & 0x3f) + 0x1c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar3 = FUN_08007c7c(iVar5 + *(int *)(((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U) +
                                       DAT_08102490) * 0x100,*(int *)(param_1 + 0x58) + DAT_08102494
                      );
  if (sVar3 == 0) {
    iVar5 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
    }
    if (iVar5 <= (int)((uint)*(byte *)(param_1 + 0xb8) * 0x100)) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      uVar4 = *DAT_081024e0 * DAT_081024e4 + DAT_081024e8;
      *DAT_081024e0 = uVar4 & 0x7fffffff;
      if (((uVar4 & 0x7fffffff) >> 0x10 & 1) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  return in_lr;
}


