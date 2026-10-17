// undefined FUN_080df9d4(void)
// entry 0x80df9d4


undefined8 FUN_080df9d4(undefined4 *param_1,undefined1 param_2,char param_3)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  puVar1 = DAT_080dfa8c;
  iVar6 = 0;
  if (*(short *)(*DAT_080dfa08 + 10) < 3) {
    uVar7 = *(ushort *)(*DAT_080dfa08 + 10) - 1 & 0xff;
  }
  else {
    uVar7 = 3;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      iVar6 = FUN_08005500(*DAT_080dfa90);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x25) = 1;
        *(undefined1 *)(iVar6 + 9) = 0x35;
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)*DAT_080dfa94;
        *(undefined2 *)(iVar6 + 0x20) = 0;
        *(undefined1 *)(iVar6 + 0x22) = 0;
        uVar4 = param_1[1];
        *(undefined4 *)(iVar6 + 0x54) = *param_1;
        *(undefined4 *)(iVar6 + 0x58) = uVar4;
        *(undefined1 *)(iVar6 + 0x10) = 1;
        *(undefined1 *)(iVar6 + 0x11) = param_2;
        *(undefined1 *)(iVar6 + 0x77) = 1;
        if (param_3 == '\0') {
          cVar2 = FUN_08128fb8(uVar8 << 8,uVar7);
          uVar5 = *puVar1 * DAT_080dfae4 + DAT_080dfae8;
          *puVar1 = uVar5 & 0x7fffffff;
          cVar3 = ((byte)(uVar5 >> 0x10) & 0x1f) - 0x40;
        }
        else {
          cVar2 = FUN_08128fb8(uVar8 << 8,uVar7);
          uVar5 = *puVar1 * DAT_080dfa98 + DAT_080dfa9c;
          *puVar1 = uVar5 & 0x7fffffff;
          cVar3 = ((byte)(uVar5 >> 0x10) & 0x1f) + 0x40;
        }
        *(char *)(iVar6 + 0x75) = cVar2 + cVar3;
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar7);
  }
  return CONCAT44(in_lr,iVar6);
}


