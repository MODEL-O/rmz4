// undefined FUN_080b7b34(void)
// entry 0x80b7b34


undefined4 FUN_080b7b34(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
      if (sVar2 != 0) {
        FUN_08002b10(DAT_080b7c18);
        *(char *)(param_1 + 0xb4) = '\x01';
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x60) = 0x80;
        local_24 = *(int *)(param_1 + 0x54);
        local_20 = *(int *)(param_1 + 0x58) + DAT_080b7c1c;
        FUN_080cf8ac(&local_24,0,0);
        local_24 = *(int *)(param_1 + 0x54) + DAT_080b7c20;
        local_20 = *(undefined4 *)(param_1 + 0x58);
        FUN_080e7a4c(&local_24,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
        local_24 = *(int *)(param_1 + 0x54) + 0x200;
        local_20 = *(undefined4 *)(param_1 + 0x58);
        FUN_080e7a4c(&local_24,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar4;
      iVar5 = iVar4 - *(int *)(param_1 + 0xb8);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0xb8) - iVar4;
      }
      if (0xe00 < iVar5) {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7c80);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        pcVar6 = (char *)(param_1 + 0xb5);
        if (*pcVar6 == '\0') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
          *pcVar6 = '\x01';
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          *pcVar6 = '\0';
        }
        cVar1 = '\x02';
      }
      else {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
      }
      *(char *)(param_1 + 0x12) = cVar1;
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7b78);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xb4) = 0;
    FUN_080b7cac(param_1);
  }
  return in_lr;
}


