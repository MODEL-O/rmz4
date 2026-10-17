// undefined FUN_08060c34(void)
// entry 0x8060c34


undefined4 FUN_08060c34(int param_1)

{
  bool bVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08060ca0);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar2 = DAT_08060ca4;
  if (*(char *)(param_1 + 0xf) != '\0') goto LAB_08060d3e;
  iVar6 = *DAT_08060ca4;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if (*(char *)(param_1 + 0x71) != '\x01') goto LAB_08060d3e;
  bVar3 = *(byte *)(param_1 + 10);
  if ((bVar3 & 0x10) == 0) {
    iVar6 = *(int *)(param_1 + 0x54);
    local_18 = DAT_08060cf4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54);
    local_18 = 0xf00;
  }
  local_18 = iVar6 + local_18;
  local_14 = *(int *)(param_1 + 0x58) + DAT_08060cf8;
  iVar5 = iVar6 - *(int *)(*piVar2 + 0x54);
  if (iVar5 < 0) {
    if (*(int *)(*piVar2 + 0x54) - iVar6 <= DAT_08060d1c) goto LAB_08060d08;
LAB_08060d20:
    FUN_08099e6c(&local_18,1,0,bVar3 >> 4 & 1);
  }
  else {
    if (DAT_08060cfc < iVar5) goto LAB_08060d20;
LAB_08060d08:
    FUN_08099e6c(&local_18,1,1,bVar3 >> 4 & 1);
  }
  FUN_08002b10(DAT_08060d68);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08060d3e:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x16;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


