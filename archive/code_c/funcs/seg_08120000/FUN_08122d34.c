// undefined FUN_08122d34(void)
// entry 0x8122d34


undefined4 FUN_08122d34(void)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  puVar1 = DAT_08122d78;
  *DAT_08122d78 = 0;
  iVar2 = DAT_08122d7c;
  uVar8 = 0;
  puVar7 = (undefined2 *)(DAT_08122d7c + -0xa4);
  do {
    iVar5 = FUN_08001594(uVar8,0x14c);
    if (iVar5 == 0) {
      puVar1[uVar8 * 0xc + 0xe] = 0;
    }
    else {
      puVar1[uVar8 * 0xc + 0xe] = 1;
      cVar4 = FUN_080016f0(uVar8,DAT_08122dac,0x14c);
      pcVar3 = DAT_08122dc8;
      if (cVar4 == '\0') {
        do {
          FUN_08001574();
          if (*pcVar3 == '\x01') {
            uVar6 = 0;
          }
          else {
            uVar6 = (uint)(byte)pcVar3[0x1e];
          }
        } while (uVar6 == 0);
        if ((int)(uVar6 * 0x1000000) < 0) {
          puVar1[uVar8 * 0xc + 0xe] = 2;
        }
        else {
          *puVar1 = 1;
          iVar5 = uVar8 * 0xc;
          *(undefined4 *)(puVar1 + iVar5 + 4) = *(undefined4 *)(iVar2 + 8);
          *(uint *)(puVar1 + iVar5 + 8) = (uint)*(byte *)(iVar2 + 1);
          puVar1[iVar5 + 0xc] = (char)*puVar7;
          puVar1[iVar5 + 0xd] = (char)*(undefined2 *)(iVar2 + -0xa2);
        }
      }
      else {
        puVar1[uVar8 * 0xc + 0xe] = 2;
      }
    }
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 5);
  return in_lr;
}


