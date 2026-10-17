// undefined FUN_08038430(void)
// entry 0x8038430


undefined4 FUN_08038430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = DAT_08038504;
  iVar3 = DAT_080384cc;
  iVar2 = DAT_0803849c;
  iVar1 = DAT_08038464;
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(byte *)(param_1 + 0xf3) < 6) {
      *(byte *)(DAT_0803849c + 9) = *(byte *)(DAT_0803849c + 9) & 0xf7;
      iVar1 = DAT_080384a0;
      *(byte *)(DAT_080384a0 + 5) = *(byte *)(DAT_080384a0 + 5) & 0xf7;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7;
      iVar5 = iVar2;
    }
    else {
      *(byte *)(DAT_08038464 + 9) = *(byte *)(DAT_08038464 + 9) | 8;
      iVar2 = DAT_08038468;
      *(byte *)(DAT_08038468 + 5) = *(byte *)(DAT_08038468 + 5) | 8;
      *(byte *)(iVar2 + 0x29) = *(byte *)(iVar2 + 0x29) | 8;
      iVar5 = iVar1;
    }
    if (4 < *(byte *)(param_1 + 0xf3)) {
      bVar4 = *(byte *)(iVar5 + 9) | 2;
      goto LAB_08038512;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf3) == '\x06') {
      *(byte *)(DAT_080384cc + 9) = *(byte *)(DAT_080384cc + 9) | 8;
      iVar1 = DAT_080384d0;
      *(byte *)(DAT_080384d0 + 5) = *(byte *)(DAT_080384d0 + 5) | 8;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 8;
      iVar5 = iVar3;
    }
    else {
      *(byte *)(DAT_08038504 + 9) = *(byte *)(DAT_08038504 + 9) & 0xf7;
      iVar1 = DAT_08038508;
      *(byte *)(DAT_08038508 + 5) = *(byte *)(DAT_08038508 + 5) & 0xf7;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7;
    }
    if (*(char *)(param_1 + 0xf3) == '\x05') {
      bVar4 = *(byte *)(iVar5 + 9) | 2;
      goto LAB_08038512;
    }
  }
  bVar4 = *(byte *)(iVar5 + 9) & 0xfd;
LAB_08038512:
  *(byte *)(iVar5 + 9) = bVar4;
  return in_lr;
}


