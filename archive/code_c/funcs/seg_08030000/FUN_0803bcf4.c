// undefined FUN_0803bcf4(void)
// entry 0x803bcf4


undefined4 FUN_0803bcf4(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x5800) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      FUN_0801cf00(param_1,0x5900);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar2 = FUN_0803c1e4(param_1);
    if (cVar2 != '\x02') {
      cVar3 = FUN_0803c400(param_1);
      if (cVar3 != '\0') {
        FUN_080d1bcc(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
        FUN_08002b10(0x2b);
        cVar2 = '\x01';
      }
      if (((cVar2 == '\0') &&
          (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
         && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
        return in_lr;
      }
      FUN_0801cf00(param_1,0x5a00);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
      FUN_08002b10(0x72);
      *(undefined1 *)(param_1 + 0xe) = 0;
LAB_0803be3a:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803bd4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\x01') {
      uVar7 = *(undefined4 *)(param_1 + 0xb4);
      if (*(char *)(param_1 + 0xe) == '\0') {
        if (*(char *)(param_1 + 0x71) < '\v') {
          return in_lr;
        }
        iVar5 = FUN_0803a4a8(uVar7);
        uVar6 = iVar5 + 2U & 0xff;
        cVar2 = FUN_08038a78(uVar7);
        if (cVar2 != '\0') {
          uVar6 = (iVar5 + 2U & 0x7f) << 1;
        }
        FUN_08005794(param_1 + 0x74,DAT_0803be08,uVar6,0xffffffff,0xffffffff,0xffffffff);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if (bVar1 < 0x3c) {
        return in_lr;
      }
      FUN_0801cf00(param_1,DAT_0803be44);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_0803be3a;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803be6c);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  return in_lr;
}


