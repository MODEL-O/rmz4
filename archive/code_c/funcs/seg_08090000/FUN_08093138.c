// undefined FUN_08093138(void)
// entry 0x8093138


undefined4 FUN_08093138(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((*puVar6 & 1) != 0) {
    FUN_08006984(0x1b);
  }
  if ((*puVar6 & 0x200) != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809318c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    if (*(char *)(param_1 + 0xb9) == '\0') {
      if ((*puVar6 & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
LAB_080931dc:
    FUN_08093ff0(param_1);
    return in_lr;
  }
  iVar4 = FUN_08094720(param_1);
  if (((iVar4 != 0) && (*(char *)(param_1 + 0xd) != '\t')) && (*(char *)(param_1 + 0xd) != '\n')) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080931e4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    goto LAB_080931dc;
  }
  if ((cVar1 == '\x01') && (uVar5 = FUN_0801fb14(DAT_08093238,param_1 + 0x54), 0xf000 < uVar5)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809323c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08093290:
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 == 0) goto LAB_080932a4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 == 0) {
      iVar4 = FUN_0802adac(0,param_1,DAT_08093270);
      *(int *)(param_1 + 0x2c) = iVar4;
      if (iVar4 == 0) {
        bVar2 = *(byte *)(param_1 + 0xd);
        if ((bVar2 != 6) && (((bVar2 < 6 || (9 < bVar2)) || (bVar2 < 8)))) {
          *(undefined1 *)(param_1 + 0xd) = 6;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 7;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      goto LAB_08093290;
    }
  }
  iVar4 = FUN_0802b3e4(iVar4);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080932a4:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080932d0));
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080932d4));
  return in_lr;
}


