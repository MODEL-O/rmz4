// undefined FUN_0806fef0(void)
// entry 0x806fef0


undefined4 FUN_0806fef0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0xbc) + 0xd) != '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) != '\0')) {
      FUN_0801cff0(param_1);
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806ff3c);
    *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xc0) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0x68) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_08002b10(DAT_0806ff40);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_0806ff68;
    FUN_0801cf00(param_1,DAT_0806ff84);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806ff68:
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x58) + iVar4;
  *(int *)(param_1 + 0x58) = iVar5;
  if (iVar4 < 0) {
    *(int *)(param_1 + 0x60) = iVar4 + *(int *)(param_1 + 0x68);
  }
  else {
    *(int *)(param_1 + 0x60) = iVar4 + *(int *)(param_1 + 0x68) * 2;
    if (*(int *)(param_1 + 0xb8) < iVar5) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xbc) + 0xc0) != '\0') {
      return in_lr;
    }
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0xc0) != '\0') {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    uVar3 = *DAT_08070008 * DAT_0807000c + DAT_08070010;
    *DAT_08070008 = uVar3 & 0x7fffffff;
    uVar1 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,0xe);
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    local_18 = *(int *)(param_1 + 0x54) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_08070018) * 4 +
                       DAT_08070014);
    local_14 = *(int *)(param_1 + 0xc4) + DAT_0807001c;
    FUN_080fa98c(&local_18,0,0);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    local_18 = *(int *)(param_1 + 0x54) +
               *(int *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_08070074 + 1) * 4
                       + DAT_08070070);
    local_14 = *(int *)(param_1 + 0xc4) + DAT_08070078;
    FUN_080fa98c(&local_18,0,0);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


