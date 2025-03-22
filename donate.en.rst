.. raw:: html

   
   <div id="main">
     <!-- donation form -->
   <div class="donate_box">
       <h3>Please consider donating to the AROS Developers, to support maintenance and development!</h3>
       <p>Pay what you want! - Thank you!</p>
   
       <p>Select a Developer : <select name="developer" id="developer" onchange="developer_choice(this.value)">

.. Include:: donate-devs.inc

.. raw:: html

       </select></p>
       <ul class="tabs">
   
         <!-- paypal -->
         <li>
   	<p><i>Donate with</i></p>
   	<input id="tab1" type="radio" value="paypal" name="paymethod" checked="checked">
   	<label for="tab1">PayPal</label>
   	<div id="paypal_tab" class="tab-content">
   	  <img class="pay-logo" src="/images/paypal-logo.png">
   	  <!-- amount -->
   	  <br>
   	  <form name="paypal" action="https://www.paypal.com/cgi-bin/webscr" method="post">
   
   	    <div class="amountlabel" id="USD">
   	      <input type="radio" name="amount" value="0" id="amount1" onchange="checkAmount(value)">
   	      <label for="amount1"> $0 </label>
   	      <input type="radio" name="amount" value="10" id="amount2" onchange="checkAmount(value)">
   	      <label for="amount2"> $10 </label>
   	      <input type="radio" name="amount" value="15" id="amount3" onchange="checkAmount(value)">
   	      <label for="amount3"> $15 </label>
   	      <input type="radio" name="amount" value="25" id="amount4" onchange="checkAmount(value)">
   	      <label for="amount4"> $25 </label>
   	      <input type="radio" name="amount" value="" id="freeamount" onchange="checkAmount(value)">
   	      <label for="freeamount" id="freeamountLabelBG">$
   	        <input type="number" name="given_amount" min="0" value="" size="1" id="freeamountLabel"
   	        onchange="freeamount.value=value; checkAmount(value)" onfocus="checkIt('freeamount',freeamount.checked)">
   	      </label>
   	    </div>
   
   	    <div class="amountlabel" id="GBP">
   	      <input type="radio" name="amount" value="0" id="amount1_G" onchange="checkAmount(value)">
   	      <label for="amount1_G"> £0 </label>
   	      <input type="radio" name="amount" value="10" id="amount2_G" onchange="checkAmount(value)" checked="checked">
   	      <label for="amount2_G"> £10 </label>
   	      <input type="radio" name="amount" value="15" id="amount3_G" onchange="checkAmount(value)">
   	      <label for="amount3_G"> £15 </label>
   	      <input type="radio" name="amount" value="25" id="amount4_G" onchange="checkAmount(value)">
   	      <label for="amount4_G"> £25 </label>
   	      <input type="radio" name="amount" value="" id="freeamount_G" onchange="checkAmount(value)">
   	      <label for="freeamount_G" id="freeamountLabelBG">£
   	      <input type="number" name="given_amount" min="0" value="" size="1" id="freeamountLabel"
   	        onchange="freeamount_G.value=value; checkAmount(value)" onfocus="checkIt('freeamount_G',freeamount_G.checked)">
   	      </label>
   	    </div>
   
   	    <div class="amountlabel" id="EUR">
   	      <input type="radio" name="amount" value="0" id="amount1_E" onchange="checkAmount(value)">
   	      <label for="amount1_E"> 0&#8364; </label>
   	      <input type="radio" name="amount" value="10" id="amount2_E" onchange="checkAmount(value)">
   	      <label for="amount2_E"> 10&#8364; </label>
   	      <input type="radio" name="amount" value="15" id="amount3_E" onchange="checkAmount(value)">
   	      <label for="amount3_E"> 15&#8364; </label>
   	      <input type="radio" name="amount" value="25" id="amount4_E" onchange="checkAmount(value)">
   	      <label for="amount4_E"> 25&#8364; </label>
   	      <input type="radio" name="amount" value="" id="freeamount_E" onchange="checkAmount(value)">
   	      <label for="freeamount_E" id="freeamountLabelBG">&#8364;
   	      <input type="number" name="given_amount" min="0" value="" size="1" id="freeamountLabel"
   	        onchange="freeamount_E.value=value; checkAmount(value)" onfocus="checkIt('freeamount_E',freeamount_E.checked)">
   	      </label>
   	    </div>
   
   	    <div class="switches">
   	      <div class="switch-field">
   	        <input type="radio" id="switch_left" name="currency_code" value="USD" onchange="currency_choice('USD')">
   	        <label for="switch_left">USD</label>
   	        <input type="radio" id="switch_mid" name="currency_code" value="GBP" onchange="currency_choice('GBP')"
                       checked="checked">
   	        <label for="switch_mid">GBP</label>
   	        <input type="radio" id="switch_right" name="currency_code" value="EUR" onchange="currency_choice('EUR')">
   	        <label for="switch_right">EUR</label>
   	      </div>
   
   	      <div class="switch-field">
   	        <input type="radio" id="onetime" name="frq" checked="checked" onchange="donation_frq('onetime')">
   	        <label for="onetime">onetime</label>
   	        <input type="radio" id="monthly" name="frq" onchange="donation_frq('monthly')">
   	        <label for="monthly">monthly</label>
   	      </div>
   	    </div>
   
   	    <div id="pay_div">
   	      <!-- list me -->
   	      <p>
   	      <label>
   	        <input type="hidden"   name="on0" value="Publish your donation and name">
   		<input type="hidden"   name="os0" value="No">
   		<input type="checkbox" name="os0" value="Yes">
   		<span>Add me to the <a href="sponsors.html">list of sponsors</a>
   		    (from 20,- EUR/USD up)</span>
   	      </label>
   	      <input type="hidden" name="charset" value="utf-8">
   
   	      <!-- feedback -->
   	      <p>
   	      <input type="hidden" name="on1" value="Feedback">
   	      <input type="hidden" name="os1" value="US">
   	      <textarea value=""   name="os1" placeholder="I use AROS because ..." rows="3" cols="48"></textarea>
   
   	      <!-- pay button -->
   	      <input type="hidden" name="lc" value="US">
   	      <input id="onetime1" name="cmd" value="_donations" type="hidden">
   	      <input id="recurrent1" name="cmd" value="_xclick-subscriptions" type="hidden" disabled>
   	      <input id="recurrent2" type="hidden" name="p3" value="1" disabled>
   	      <input id="recurrent3" type="hidden" name="t3" value="M" disabled>
   	      <input id="recurrent4" type="hidden" name="a3" value="" disabled>
   	      <input id="recurrent5" type="hidden" name="src" value="1" disabled>
   
   	      <input id="business" name="business" value=""" type="hidden">
   
   	      <input name="undefined_quantity" value="1" type="hidden">
   	      <input name="item_name" value="AROS" type="hidden">
   	      <input name="no_shipping" value="1" type="hidden">
   	      <input name="no_note" value="1" type="hidden">
   	      <input name="image_url" value="http://www.aros.org/images/AROS_logo_paypal.png" type="hidden">
   	      <input name="return" value="http://www.aros.org/donated.html" type="hidden">
   	      <input name="cancel_return" value="#distributions" type="hidden">
   	      <input name="cbt" value="Download AROS now!" type="hidden">
   	      <p id="dButton">
   	      <button class="donateButton" name="submit" alt="Donate via PayPal"
   		  type="submit">Donate & Download</button>
   	    </div>
   	  </form>
   
   	  <!-- download -->
   	  <div id="download_div">
   	    <p>
   	      <a href="download.html#distributions"><button class="donateButton" alt="download">Download</button></a>
   	    </p>
   	  </div>
   	</div>
         </li>
       </ul>
   </div>
   </div>
   
   <script type="text/javascript">
     var amountGiven = 0;
     var amount = 0;
   
     window.addEventListener("load",function(){
       document.getElementById('download_div').style.display = "none";
       document.getElementById('USD').style.display = "none";
       document.getElementById('EUR').style.display = "none";
       amountGiven = 10;
       document.getElementById('developer').selectedIndex = Math.floor(document.getElementById('developer').length * Math.random());
       document.getElementById('business').value = document.getElementById('developer').value;
     });
   
     function checkAmount(amount) {
       if (amount < 0 ) {
         document.getElementById('amountfield').value = 0;
         amount = 0;
       }
       if (amount == 0) {
         document.getElementById('download_div').style.display = "block";
         document.getElementById('pay_div').style.display = "none";
       }
       if (amount > 0) {
         document.getElementById('download_div').style.display = "none";
         document.getElementById('pay_div').style.display = "block";
       }
       document.getElementById('recurrent4').value = amount;
       amountGiven = amount;
     }
   
     function developer_choice(developer) {
       document.getElementById('business').value = developer;
     }
  
     function checkIt(id, checked) {
       if (!checked) {
         document.getElementById(id).checked = "checked";
       }
     }
   
     function currency_choice(txt) {
       if (txt == "GBP") {
         document.getElementById('EUR').style.display = "none";
         document.getElementById('GBP').style.display = "block";
         document.getElementById('USD').style.display = "none";
         for (var i = 0; i < 5; i++) {
   	var v = document.getElementsByName('amount')[i];
   	if (v.value == amountGiven) {
   	  v.checked = "checked";
   	}
        }
       }
       if (txt == "USD") {
         document.getElementById('EUR').style.display = "none";
         document.getElementById('GBP').style.display = "none";
         document.getElementById('USD').style.display = "block";
         for (var i = 0; i < 5; i++) {
   	var v = document.getElementsByName('amount')[i];
   	if (v.value == amountGiven) {
   	  v.checked = "checked";
   	}
        }
       }
       if (txt == "EUR") {
        document.getElementById('EUR').style.display = "block";
         document.getElementById('GBP').style.display = "none";
        document.getElementById('USD').style.display = "none";
        for (var i = 5; i < 10; i++) {
   	var v = document.getElementsByName('amount')[i];
   	if (v.value == amountGiven) {
   	  v.checked = "checked";
   	}
         }
       }
     }
   
     function donation_frq(txt) {
       if (txt == "onetime") {
         document.getElementById('onetime1').disabled= false;
         for (var i=1; i<6; i++) {
   	document.getElementById('recurrent'+i).disabled= true;
         }
       }
       if (txt == "monthly") {
         document.getElementById('onetime1').disabled= true;
         for (var i=1; i<6; i++) {
   	document.getElementById('recurrent'+i).disabled= false;
         }
       }
     }
   </script>
   
