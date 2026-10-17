// undefined FUN_0803b2a4(void)
// entry 0x803b2a4


undefined8 FUN_0803b2a4(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0803b2f0);
  puVar2 = DAT_0803b340;
  puVar1 = DAT_0803b2f4;
  if (iVar4 == 0) goto LAB_0803b43a;
  iVar6 = -(uint)*(byte *)(param_1 + 0xf8);
  iVar8 = -(iVar6 >> 0x1f);
  if (param_3 == '\0') {
    *(undefined1 *)(iVar4 + 9) = 0;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar1;
    if (iVar6 < 0 || iVar8 == 0) {
      bVar3 = *(byte *)(iVar4 + 0xb) & 0xbf;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 0xb) | 0x40;
    }
    *(byte *)(iVar4 + 0xb) = bVar3;
    *(undefined1 *)(iVar4 + 0x25) = 0x10;
    *(undefined2 *)(iVar4 + 0x20) = *DAT_0803b31c;
    *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)(iVar8 + DAT_0803b320);
LAB_0803b370:
    FUN_0803a8d4(iVar8,0,0);
  }
  else {
    *(undefined1 *)(iVar4 + 9) = 0;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar2;
    if (iVar6 < 0 || iVar8 == 0) {
      bVar3 = *(byte *)(iVar4 + 0xb) & 0xbf;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 0xb) | 0x40;
    }
    *(byte *)(iVar4 + 0xb) = bVar3;
    *(undefined1 *)(iVar4 + 0x25) = 0x10;
    *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)((iVar6 >> 0x1f) * -2 + DAT_0803b37c);
    *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)(iVar8 + DAT_0803b380);
    if (param_3 == '\x01') goto LAB_0803b370;
    if (param_3 == '\x02') {
      uVar5 = 0;
LAB_0803b3aa:
      FUN_0803a8d4(iVar8,uVar5,1);
    }
    else {
      if (param_3 == '\x03') {
        uVar5 = 0;
        goto LAB_0803b3aa;
      }
      if (param_3 == '\x04') {
        uVar5 = 2;
        goto LAB_0803b3aa;
      }
      if (param_3 == '\x05') {
        uVar5 = 3;
        goto LAB_0803b3aa;
      }
      if (param_3 == '\x06') {
        FUN_0803a8d4(iVar8,0,1);
      }
    }
  }
  *(int *)(iVar4 + 0xb4) = param_1;
  *(int *)(iVar4 + 0x2c) = param_2;
  if ((*(byte *)(param_2 + 10) & 0x10) == 0) {
    iVar8 = *(int *)(param_2 + 0x54);
    iVar6 = DAT_0803b40c;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x54);
    iVar6 = 0xc00;
  }
  *(int *)(iVar4 + 0x54) = iVar8 + iVar6;
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(char *)(iVar4 + 0x10) = param_3;
  *(undefined1 *)(iVar4 + 0x11) = 0;
  bVar3 = *(byte *)(param_2 + 10) >> 4;
  bVar7 = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(iVar4 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(iVar4 + 10) | 0x10;
  }
  *(byte *)(iVar4 + 10) = bVar3;
  *(byte *)(iVar4 + 0x4c) = bVar7;
  *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) & 0xef | bVar7 << 4;
  *(undefined1 *)(iVar4 + 0xc1) = *(undefined1 *)(param_1 + 0xc2);
LAB_0803b43a:
  return CONCAT44(in_lr,iVar4);
}


