// undefined FUN_0804c938(void)
// entry 0x804c938


undefined4 FUN_0804c938(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar4 = DAT_0804c98c;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar4 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x12);
  pbVar7 = (byte *)(param_1 + 0xbe);
  pbVar5 = (byte *)(param_1 + 0xbd);
  if (bVar1 < 0x40) {
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 == 3) {
      if (*pbVar7 < 5) {
        uVar4 = 0;
        goto LAB_0804c9b6;
      }
    }
    else if (bVar1 == 7) {
      if (*pbVar7 < 4) {
        uVar4 = 1;
LAB_0804c9b6:
        FUN_0804c628(uVar6,param_1,1,uVar4);
        *pbVar5 = *pbVar5 + 1;
      }
    }
    else if ((bVar1 == 0xb) && (*pbVar7 < 3)) {
      uVar4 = 2;
      goto LAB_0804c9b6;
    }
  }
  FUN_08005794(param_1 + 0x74,(uint)*pbVar5 * 0x30 + DAT_0804ca00,*(undefined1 *)(param_1 + 0xbf),
               0xffffffff,0xffffffff,*pbVar7);
  cVar2 = FUN_0804cc2c(param_1);
  if (cVar2 == '\x02') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ca04);
    *(undefined4 *)(param_1 + 0xc) = 2;
LAB_0804ca52:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  else {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      FUN_080d1bcc(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08002b10(0x2b);
      cVar2 = '\x01';
    }
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
    }
    else {
      if (*pbVar7 == 5) {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ca5c);
        *(undefined4 *)(param_1 + 0xc) = 2;
        goto LAB_0804ca52;
      }
      *pbVar7 = *pbVar7 + 1;
      cVar2 = '\b';
    }
    *(char *)(param_1 + 0x13) = cVar2;
  }
  return in_lr;
}


