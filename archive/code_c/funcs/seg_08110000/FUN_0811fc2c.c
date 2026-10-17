// undefined FUN_0811fc2c(void)
// entry 0x811fc2c


undefined8 FUN_0811fc2c(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar6 = param_1 + DAT_0811fc98;
    FUN_080027b8(iVar6,DAT_0811fc9c,0x80,0,0);
    FUN_08001f1c(iVar6,(*DAT_0811fca0 & 0x1f00) << 3,0x1000);
    *(undefined1 *)(param_1 + DAT_0811fca4 + 0xd) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  FUN_08120aa8(param_1);
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\x01') {
    uVar4 = *(ushort *)(DAT_0811fca8 + 6) & 0x10;
    if ((*(ushort *)(DAT_0811fca8 + 6) & 0x10) != 0) {
      FUN_08002b10(1);
      uVar5 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined1 *)(param_1 + 3) = 0;
      goto LAB_0811fe4a;
    }
    uVar1 = *(ushort *)(DAT_0811fca8 + 4);
    if (((uVar1 & 1) == 0) && ((uVar1 & 0x80) == 0)) {
      if ((uVar1 & 2) != 0) {
        *(undefined1 *)(param_1 + DAT_0811fd1c + 0x11) = 1;
      }
    }
    else {
      iVar6 = param_1 + DAT_0811fcf8;
      if (*(char *)(iVar6 + 3) != '\0') {
        iVar7 = param_1 + DAT_0811fcfc;
        FUN_080027b8(iVar7,DAT_0811fd00,0xae,0,uVar4);
        FUN_08001f1c(iVar7,(*DAT_0811fd04 & 0x1f00) << 3,0x1000);
        FUN_08002b10(2);
        *(char *)(iVar6 + 2) = (char)uVar4;
        goto LAB_0811fe44;
      }
LAB_0811fda8:
      FUN_08002b10(4);
    }
  }
  else if (cVar2 == '\x02') {
    if ((*(ushort *)(DAT_0811fd68 + 4) & 2) != 0) {
      iVar6 = param_1 + DAT_0811fd6c;
      FUN_080027b8(iVar6,DAT_0811fd70,0x80,0,0);
      FUN_08001f1c(iVar6,(*DAT_0811fd74 & 0x1f00) << 3,0x1000);
      FUN_08002b10(3);
      uVar3 = 1;
      goto LAB_0811fe46;
    }
    if ((*(ushort *)(DAT_0811fd68 + 4) & 1) == 0) {
      if ((*(ushort *)(DAT_0811fd68 + 6) & 0x40) == 0) {
        if ((*(ushort *)(DAT_0811fd68 + 6) & 0x80) != 0) {
          param_1 = param_1 + DAT_0811fe1c;
          if (*(byte *)(param_1 + 2) + 1 < (uint)*(byte *)(param_1 + 3)) {
            FUN_08002b10(1);
            *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
          }
          else if (*(char *)(param_1 + 0xf) != '\0') {
            FUN_08002b10(1);
            *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          }
        }
      }
      else {
        iVar6 = param_1 + DAT_0811fdd4;
        if (*(char *)(iVar6 + 2) == '\0') {
          if (*(char *)(iVar6 + 0xe) == '\0') {
            FUN_08002b10(3);
            uVar3 = 1;
            goto LAB_0811fe46;
          }
          FUN_08002b10(1);
          *(char *)(iVar6 + 0xd) = *(char *)(iVar6 + 0xd) + -1;
        }
        else {
          FUN_08002b10(1);
          *(char *)(iVar6 + 2) = *(char *)(iVar6 + 2) + -1;
        }
      }
    }
    else {
      iVar6 = param_1 + DAT_0811fda0;
      if (*(char *)(param_1 + DAT_0811fda4 + (uint)*(byte *)(iVar6 + 2)) == -1) goto LAB_0811fda8;
      FUN_08002b10(2);
      *(undefined1 *)(param_1 + 3) = 3;
      *(undefined1 *)(iVar6 + 0x12) = 0;
    }
  }
  else if ((cVar2 == '\x03') && (cVar2 = FUN_08120d60(param_1), cVar2 != '\0')) {
LAB_0811fe44:
    uVar3 = 2;
LAB_0811fe46:
    *(undefined1 *)(param_1 + 3) = uVar3;
  }
  uVar5 = 1;
LAB_0811fe4a:
  return CONCAT44(in_lr,uVar5);
}


