// undefined FUN_08030d04(void)
// entry 0x8030d04


undefined4 FUN_08030d04(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x174) = 1;
  pcVar5 = (char *)(param_1 + DAT_08030d5c);
  cVar2 = *pcVar5;
  *pcVar5 = cVar2 + '\x01';
  if ((char)(cVar2 + '\x01') == '\x03') {
    *pcVar5 = '\0';
    FUN_080d1d08(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if ((*(byte *)(param_1 + DAT_08030d60) & 2) != 0) {
    return in_lr;
  }
  uVar6 = *(uint *)(param_1 + 600);
  if ((uVar6 & 0x20) == 0) {
    if ((uVar6 & 0x10) == 0) {
      bVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
    }
    else {
      bVar7 = 1;
    }
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  if (bVar7 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 0x142) & 0x20) == 0) {
    if (bVar7 == 0) goto LAB_08030e0e;
    sVar3 = FUN_08038790(param_1);
    iVar4 = (int)sVar3;
  }
  else if (bVar7 == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
    sVar3 = FUN_08038790(param_1);
    if (*(int *)(param_1 + 0x5c) + (int)sVar3 < 0 == SCARRY4(*(int *)(param_1 + 0x5c),(int)sVar3))
    goto LAB_08030e1c;
LAB_08030e0e:
    sVar3 = FUN_08038790(param_1);
    iVar4 = -(int)sVar3;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
    sVar3 = FUN_08038790(param_1);
    if (*(int *)(param_1 + 0x5c) <= (int)sVar3) goto LAB_08030e1c;
    sVar3 = FUN_08038790(param_1);
    iVar4 = (int)sVar3;
  }
  *(int *)(param_1 + 0x5c) = iVar4;
LAB_08030e1c:
  cVar2 = *(char *)(param_1 + 0x13a) + -1;
  *(char *)(param_1 + 0x13a) = cVar2;
  if (cVar2 == -1) {
    if ((*(uint *)(param_1 + 600) & 0x30) == 0) {
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


