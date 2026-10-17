// undefined FUN_080a71b4(void)
// entry 0x80a71b4


undefined4 FUN_080a71b4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x8b00);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 0x11) == '\0') || (*(char *)(param_1 + 0xbf) == '\0')) {
      pcVar7 = (char *)(param_1 + 0xbd);
      *pcVar7 = *pcVar7 - (*(byte *)(param_1 + 0x12) >> 4);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x10';
      if (0x3a < (byte)(*pcVar7 + 0x3fU)) goto LAB_080a73e6;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_20 = *(int *)(param_1 + 0x54);
        iVar6 = DAT_080a72b0;
      }
      else {
        local_20 = *(int *)(param_1 + 0x54);
        iVar6 = 0x1900;
      }
      local_20 = local_20 + iVar6;
      local_1c = *(int *)(param_1 + 0x58) + 0x300;
      sVar4 = FUN_08007c7c(local_20);
      if (sVar4 != 0) {
        FUN_0801fe64(2,param_1 + 0x54);
        uVar2 = DAT_080a72b4;
        uVar5 = *DAT_080a72b8 * DAT_080a72bc + DAT_080a72c0;
        *DAT_080a72b8 = uVar5 & 0x7fffffff;
        uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar5 = uVar5 << 4;
        }
        else {
          uVar5 = uVar5 << 4 | 1;
        }
        FUN_080d4c8c(&local_20,uVar2,0,uVar5);
        uVar2 = DAT_080a7300;
        uVar5 = *DAT_080a7304 * DAT_080a7308 + DAT_080a730c;
        *DAT_080a7304 = uVar5 & 0x7fffffff;
        uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar5 = uVar5 << 4;
        }
        else {
          uVar5 = uVar5 << 4 | 1;
        }
        FUN_080d4c8c(&local_20,uVar2,0,uVar5);
        uVar2 = DAT_080a734c;
        uVar5 = *DAT_080a7350 * DAT_080a7354 + DAT_080a7358;
        *DAT_080a7350 = uVar5 & 0x7fffffff;
        uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar5 = uVar5 << 4;
        }
        else {
          uVar5 = uVar5 << 4 | 1;
        }
        FUN_080d4c8c(&local_20,uVar2,0,uVar5);
        uVar2 = DAT_080a7398;
        uVar5 = *DAT_080a739c * DAT_080a73a0 + DAT_080a73a4;
        *DAT_080a739c = uVar5 & 0x7fffffff;
        uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar5 = uVar5 << 4;
        }
        else {
          uVar5 = uVar5 << 4 | 1;
        }
        FUN_080d4c8c(&local_20,uVar2,0,uVar5);
      }
      *pcVar7 = -4;
    }
    FUN_08002b10(DAT_080a73cc);
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)) {
        *(undefined1 *)(param_1 + 0xd) = 3;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_080a73e6;
    }
    if ((bVar1 != 0) ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
    goto LAB_080a73e6;
    FUN_0801cf00(param_1,DAT_080a720c);
  }
  *(undefined1 *)(param_1 + 0x12) = 0x20;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080a73e6:
  FUN_0801cff0(param_1);
  return in_lr;
}


